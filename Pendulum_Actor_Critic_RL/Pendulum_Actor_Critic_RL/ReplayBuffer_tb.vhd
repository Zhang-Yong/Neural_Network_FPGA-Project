--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:23:02 03/26/2017
-- Design Name:   
-- Module Name:   E:/Xilinx/Pendulum_Actor_Critic_RL/Pendulum_Actor_Critic_RL/ReplayBuffer_tb.vhd
-- Project Name:  Pendulum_Actor_Critic_RL
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ReplayBuffer
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY ReplayBuffer_tb IS
END ReplayBuffer_tb;
 
ARCHITECTURE behavior OF ReplayBuffer_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
	 -- NEED change dina and douta to 32 bit here !!!
 
    COMPONENT ReplayBuffer
    PORT(
         clka : IN  std_logic;
         wea : IN  std_logic_vector(0 downto 0);
         addra : IN  std_logic_vector(13 downto 0);
         dina : IN  std_logic_vector(7 downto 0);
         douta : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clka : std_logic := '0';
   signal wea : std_logic_vector(0 downto 0) := (others => '0');
   signal addra : std_logic_vector(13 downto 0) := (others => '0');
   signal dina : std_logic_vector(7 downto 0) := (others => '0');
	signal writeptr, readptr : std_logic_vector(13 downto 0) := (others => '0');
	
 	--Outputs
   signal douta : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clka_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ReplayBuffer PORT MAP (
          clka => clka,
          wea => wea,
          addra => addra,
          dina => dina,
          douta => douta
        );

   -- Clock process definitions
   clka_process :process
   begin
		clka <= '0';
		wait for clka_period/2;
		clka <= '1';
		wait for clka_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process(clka)			-- add clka here, Yong
   begin		
      -- hold reset state for 100 ns.
--      wait for 100 ns;	

--      wait for clka_period*10;

      -- insert stimulus here 
		wea <= "1";
		if (rising_edge(clka)) then
		--Writing to all the memory locations of the BRAM.Set wea "1" for this.
		-- inside process/always block, input port can not assign a value, a address pointer signal can be used here.
		MEM_WRITE:
			if (wea = "1") then
			  addra <= addra + "1";
			  writeptr <= writeptr + "1";
			  dina <= "11111111";		-- write 1
			  if (writeptr = "11111111111111") then
					writeptr <= "00000000000000";			-- reset writeptr to 0, write overwrite from beginning
					addra <= "00000000000000";				-- reset address to 0, write overwrite from beginning
			  end if;
			end if;
	
		--reading all the 256 memory locations in the BRAM.
		MEM_READ:
		wea <= "0";
			 if (wea = "0") then
				addra <= addra + "1";
				readptr <= readptr + "1";
				assert douta = "11111111" report "Memory read out fail";
				-- reset read pointer to 0
				if (readptr = "11111111111111") then
					readptr <= "00000000000000";
					addra <= "00000000000000";
				end if;
			 end if;
		end if;
		
--      wait;
   end process;

END;
