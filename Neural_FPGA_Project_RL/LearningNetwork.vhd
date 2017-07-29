--Learning Network
--Should have full back propagation capabilities
--383 Final Project
--By C2C William Parks
--8 May 2014
--f(x)= x*w1*w2 + w3

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity LearningNetwork is
    Port ( --Input : in  STD_LOGIC_VECTOR (1 downto 0);	-- Yong
			  Input : in  STD_LOGIC_VECTOR (4 downto 0);		-- Yong
--         Output : out  STD_LOGIC_VECTOR (4 downto 0);	-- Yong
			  Output : out  STD_LOGIC_VECTOR (7 downto 0);		-- Yong
           update : in  STD_LOGIC;
--           corrOut : in  STD_LOGIC_VECTOR (4 downto 0);
			  corrOut : in  STD_LOGIC_VECTOR (7 downto 0);		-- Yong

			  clk	: in STD_LOGIC);	-- Add clk signal, Yong
			  
end LearningNetwork;

architecture Behavioral of LearningNetwork is
--	signal leftIn, rightIn : std_logic_vector(4 downto 0);	-- Yong
	signal middleIn : std_logic_vector(9 downto 0);
--	signal mLOut, mMOut, mROut : std_logic_vector(4 downto 0);	-- Yong
	signal mLOut, mMOut, mROut : std_logic_vector(7 downto 0);	-- Yong
	signal weightDeltaKLeft, weightDeltaKMiddle, weightDeltaKRight : std_logic_vector(63 downto 0);
--	signal topIn : std_logic_vector(14 downto 0);	-- Yong
	signal topIn : std_logic_vector(23 downto 0);	-- Yong
	signal weightDeltaKOutNode : std_logic_vector(63 downto 0);
	
	signal input_result : std_logic_vector(4 downto 0);
	--signal update_result : std_logic;
--	signal corrOut_result : std_logic_vector(4 downto 0);
	signal corrOut_result : std_logic_vector(7 downto 0);	 -- Yong

	
begin

	-- Clock process definitions, add clk signal
	-- add clk after process, or Isim will hang forever
   clk_process :process(clk)
   begin
		if rising_edge(clk) then
			input_result <= Input;
			--update_result <= update;  comment this as update is clk
			corrOut_result <= corrOut;
		end if;

   end process;
	-- end clk process, Yong
	
	
--	Yong
--	leftIn <= "10000" when input_result(1) = '1' else		-- change
--				 "00000";
--				 
--	rightIn <= "10000" when input_result(0) = '1' else		-- change
--				  "00000";
	
	weightDeltaKLeft <= "00000000000000000000000000000000000000000000000000000000" & weightDeltaKOutNode(7 downto 0);
	weightDeltaKMiddle <=  "00000000000000000000000000000000000000000000000000000000" & weightDeltaKOutNode(15 downto 8);
	weightDeltaKRight <=  "00000000000000000000000000000000000000000000000000000000" & weightDeltaKOutNode(23 downto 16);
	
--	middleIn <= rightIn & leftIn;		-- Yong
-- 8*3 Hidden layer below, ML, MM, MR 3 columes
	topIn <= mROut & mMOut & mLOut;
	
	mL : entity work.hiddenNode(behavioral)
		generic map(
		-- Yong
--			numActive => 2,
--			default0 => "01110000", --"01100000",
--			default1 => "10111100", --"10000000",
			numActive => 1,		-- Yong
			default0 => "01110000", --"01100000",
			defLearnRate => "00000100"
		)	
		PORT MAP(
--			input => "000000000000000000000000000000" & middleIn,		-- Yong
			input => "00000000000000000000000000000000000" & input_result,		-- Yong, 35 + 5 = 40, use input_result instead of Input, or clk will not appear in timing constrain
			weightDeltaKIn => weightDeltaKLeft,
			update => update,		-- Yong, change here
			output => mLOut
		);

	mM : entity work.hiddenNode(behavioral)
		generic map(
--			numActive => 2,
--			default0 => "10100000", --"10000000",
--			default1 => "00001100", --"01100000",
			numActive => 1,		-- Yong
			default0 => "01110000", --"01100000",
			defLearnRate => "00000100"
		)	
		PORT MAP(
--			input => "000000000000000000000000000000" & middleIn,
			input => "00000000000000000000000000000000000" & input_result,		-- Yong, 35 + 5 = 40
			weightDeltaKIn => weightDeltaKMiddle,
			update => update,		-- Change back
			output => mMOut
		);

	mR : entity work.hiddenNode(behavioral)
		generic map(
--			numActive => 2,
--			default0 => "00001100", --"00010100",
--			default1 => "00001100", --"00010100",
			numActive => 1,		-- Yong
			default0 => "01110000", --"01100000",
			defLearnRate => "00000100"
		)	
		PORT MAP(
--			input => "000000000000000000000000000000" & middleIn,
			input => "00000000000000000000000000000000000" & input_result,		-- Yong, 35 + 5 = 40
			weightDeltaKIn => weightDeltaKRight,
			update => update,		-- change
			output => mROut
		);

	t : entity work.OutputNode(behavioral)
		generic map(
			numActive => 3,										-- the numActiver here decide hidden network columes, the more, more parameters
			default0 => "11000000",--"10100000",			--  Should be same as above code, Yong
			default1 => "10010000",--"10100000",
			default2 => "01000000",--"01010110",
			defLearnRate => "00001000"
		)
		PORT MAP(
--			input => "0000000000000000000000000" & topIn,	-- Yong
			input => "0000000000000000" & topIn,	-- Yong
			corrOut => corrOut_result,		-- change
			update => update,			--	 change
			weightDeltaK => weightDeltaKOutNode,
			output => output
		);

end Behavioral;

