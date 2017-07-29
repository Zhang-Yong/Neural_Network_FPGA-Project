--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:58:04 03/26/2017
-- Design Name:   
-- Module Name:   E:/Xilinx/Pendulum_Actor_Critic_RL/Pendulum_Actor_Critic_RL/BRAM_tb.vhd
-- Project Name:  Pendulum_Actor_Critic_RL
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: BRAM
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
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY BRAM_tb IS
END BRAM_tb;
 
ARCHITECTURE behavior OF BRAM_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT BRAM
--    PORT(
--         clka : IN  std_logic;
--         wea : IN  std_logic_vector(0 downto 0);
--         addra : IN  std_logic_vector(13 downto 0);
--         dina : IN  std_logic_vector(7 downto 0);
--         douta : OUT  std_logic_vector(7 downto 0)
--        );
    END COMPONENT;
    

   --Inputs
   signal clka : std_logic := '0';
   signal wea : std_logic_vector(0 downto 0) := (others => '0');
   signal addra : std_logic_vector(13 downto 0) := (others => '0');
   signal dina : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal douta : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clka_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: BRAM PORT MAP (
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
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clka_period*10;

      -- insert stimulus here 
		-- write all 1 for 8k memory
		for i in 0 to 8192 loop
        wea <= "1";		-- enable write
        wait for 2 ns;
--        addra <= addra + "1";		-- done in module file
        dina <= "11111111";		-- write 1
		end loop;   
		
		-- read all 1 for 8k memory
		for i in 0 to 8192 loop
        wea <= "0";		-- enalbe read
        wait for 2 ns;
--        addra <= addra + "1";		-- done in module file
       assert douta = "11111111" report "Memory read out fail";
		  
		end loop;
		

      wait;
   end process;

END;
