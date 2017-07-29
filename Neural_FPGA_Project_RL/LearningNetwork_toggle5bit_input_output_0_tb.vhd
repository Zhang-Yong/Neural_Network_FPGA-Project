--Test of the Learning Network
--By Zhang Yong
--19 March 2017

LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY LearningNetworkTest IS
END LearningNetworkTest;
 
ARCHITECTURE behavior OF LearningNetworkTest IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT LearningNetwork
    PORT(
			clk	: IN std_logic;			-- add clk here
         Input : IN  std_logic_vector(4 downto 0);
         Output : OUT  std_logic_vector(7 downto 0);
         update : IN  std_logic;
--         corrOut : IN  std_logic_vector(4 downto 0)			-- change to 8 bit to match output 8 bit, Yong
			corrOut : IN  std_logic_vector(7 downto 0)	
        );
    END COMPONENT;
    

   --Inputs
   signal Input : std_logic_vector(4 downto 0) := (others => '0');
   signal update : std_logic := '0';
--   signal corrOut : std_logic_vector(4 downto 0) := (others => '0');
	signal corrOut : std_logic_vector(7 downto 0) := (others => '0');		-- Yong, change to 8 bit

	signal clk : std_logic;		-- add clk here
 	--Outputs
   signal Output : std_logic_vector(7 downto 0);
	
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant clk_period : time := 125 ns;				-- Chang to 125 ns accoridng to STA result, min period 122 ns
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: LearningNetwork PORT MAP (
			 clk => clk,				-- add clk here
          Input => Input,
          Output => Output,
          update => update,
          corrOut => corrOut
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 125 ns;						-- Yong, change from 100 to 125 ns	

		input <= "00000";
		wait for clk_period*5;
		input <= "00000";
		wait for clk_period*5;
		input <= "00000";
		wait for clk_period*5;
		input <= "00000";
		wait for clk_period*5;

		for i in 0 to 50000 loop
			input <= "00000";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "00001";
			corrOut <= "00000001";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "00010";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;

			input <= "00011";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "00100";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "00101";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "00110";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "00111";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "01000";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "01001";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "01010";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "01011";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "01100";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "01101";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "01110";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "01111";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "10000";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "10001";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "10010";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "10011";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "10100";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "10101";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "10110";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "10111";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "11000";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "11001";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "11010";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "11011";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "11100";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "11101";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "11110";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			input <= "11111";
			corrOut <= "00000000";
			update <= '1';
			wait for clk_period;
			update <= '0';
			wait for clk_period;
			
			
		end loop;

		wait for clk_period*20;
		input <= "00000";
		wait for clk_period*5;
		input <= "10000";
		wait for clk_period*5;
		input <= "00001";
		wait for clk_period*5;
		input <= "11111";

      wait;
   end process;

END;
