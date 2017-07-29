----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 		 Zhang Yong
-- 
-- Create Date:    16:15:49 03/26/2017 
-- Design Name: 
-- Module Name:    BRAM - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
-- This module instantiate relayBuffer Block memory module, write data into memory
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
-- add here
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity BRAM is
    Port ( 
--			  clka : in  STD_LOGIC;
--           wea : in  STD_LOGIC_VECTOR (0 downto 0);
--           addra : in  STD_LOGIC_VECTOR (13 downto 0);
--           dina : in  STD_LOGIC_VECTOR (7 downto 0);
--           douta : out  STD_LOGIC_VECTOR (7 downto 0);
			  we: in  STD_LOGIC_VECTOR(0 downto 0);
			  state: in STD_LOGIC_VECTOR (7 downto 0);
			  action: in STD_LOGIC_VECTOR (7 downto 0);
			  reward: in STD_LOGIC_VECTOR (7 downto 0);
			  new_state: in STD_LOGIC_VECTOR (7 downto 0)
			  );
end BRAM;

architecture Behavioral of BRAM is

------------- Begin Cut here for COMPONENT Declaration ------ COMP_TAG
COMPONENT ReplayBuffer
  PORT (
    clka : IN STD_LOGIC;
    wea : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
    addra : IN STD_LOGIC_VECTOR(13 DOWNTO 0);
    dina : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
    douta : OUT STD_LOGIC_VECTOR(31 DOWNTO 0)
  );
END COMPONENT;
-- COMP_TAG_END ------ End COMPONENT Declaration ------------


--Inputs
   signal clka : std_logic := '0';
   signal wea : std_logic_vector(0 downto 0) := (others => '0');
   signal addra : std_logic_vector(13 downto 0) := (others => '0');
   signal dina : std_logic_vector(31 downto 0) := (others => '0');
	signal writeptr, readptr: std_logic_vector(13 downto 0) := (others => '0');   -- read/write pointer
--	signal state, action, reward, new_state: std_logic_vector(7 downto 0) := (others => '0');	
	signal experience: std_logic_vector(31 downto 0) := (others => '0');
	

 	--Outputs
   signal douta : std_logic_vector(31 downto 0);



begin
------------- Begin Cut here for INSTANTIATION Template ----- INST_TAG
BRAM_instance : ReplayBuffer
  PORT MAP (
    clka => clka,
    wea => wea,
    addra => addra,
    dina => dina,
    douta => douta
  );
-- INST_TAG_END ------ End INSTANTIATION Template ------------

--	experience <= state & action & reward & new_state;		

	wea <= we ;			-- assign write/read bit 

	MEM_WRITE:	-- add a recorder into memory
	process (clka) begin
		if (rising_edge(clka)) then
		
	--Writing to all the memory locations of the BRAM.Set wea "1" for this.
	-- inside process/always block, input port can not assign a value, a address pointer signal can be used here.
			if (wea = "1") then
--				state <= state;		-- lactch input data
--				action <= action;
--				reward <= reward;
--				new_state <= new_state;
				experience <= state & action & reward & new_state;	-- four 8 bit data into one 32 bit data 
				dina <= experience;		-- dina is not port of this moduel
				addra <= addra + "1";
				writeptr <= writeptr + "1";
				
				if (writeptr = "11111111111111") then
					writeptr <= "00000000000000";			-- reset writeptr to 0, write overwrite from beginning
					addra <= "00000000000000";				-- reset address to 0, write overwrite from beginning
				end if;
			end if;
		end if;
	end process MEM_WRITE;
	
	--change to random read 128 sample here in the BRAM.
	MEM_READ:
	process (clka) begin
		if (rising_edge(clka)) then
			 if (wea = "0") then
				addra <= addra + "1";
				readptr <= readptr + "1";
--				assert douta = "11111111" report "Memory read out fail";
				-- reset read pointer to 0
				if (readptr = "11111111111111") then
					readptr <= "00000000000000";
					addra <= "00000000000000";
				end if;
			 end if;
		end if;
   end process MEM_READ;

end Behavioral;

