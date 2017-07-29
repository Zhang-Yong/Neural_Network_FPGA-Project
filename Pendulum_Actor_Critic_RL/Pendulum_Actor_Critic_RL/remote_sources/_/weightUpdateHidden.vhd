--Based on given input, returns an updated weight value, for hidden level weights
--Change to Linear regression
--21 March, 2017

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

use IEEE.NUMERIC_STD.ALL;

entity weightUpdateHidden is
	Port (
		currWeight : in std_logic_vector(7 downto 0);
		learnRate : in std_logic_vector(7 downto 0);
		prevNodeActiv : in std_logic_vector(4 downto 0);
		deltaKArray : in std_logic_vector(63 downto 0);
		sigIn : in std_logic_vector(7 downto 0);
		newWeight : out std_logic_vector(7 downto 0)
	);
end weightUpdateHidden;

architecture Behavioral of weightUpdateHidden is
	signal deltaKSum : std_logic_vector(7 downto 0);
	signal sigDer : std_logic_vector(4 downto 0);
	signal extSigDer : std_logic_vector(7 downto 0);		-- Yong
	signal extPrevNode : std_logic_vector(7 downto 0);
	signal leftMultTemp, rightMultTemp, fullProd : std_logic_vector(7 downto 0);
begin
	--- Cost function, Error, expected output - actual output, sum of 8 error?
	--  Yong
	deltaKSum <= std_logic_vector(signed(deltaKArray(7 downto 0)) + signed(deltaKArray(15 downto 8)) + signed(deltaKArray(23 downto 16)) + signed(deltaKArray(31 downto 24)) + signed(deltaKArray(39 downto 32)) + signed(deltaKArray(47 downto 40)) + signed(deltaKArray(55 downto 48)) + signed(deltaKArray(63 downto 56)));

-- Yong, comment
--	sigDerMod : entity work.sigDerivative(behavioral)
--		PORT MAP(input => sigIn, output => sigDer);	
--	
--	extSigDer <= "000" & sigDer;
--	extSigDer <= "00000001"; 	-- Yong, change it to 1 so multipy do not affect,
	
	extPrevNode <= "000" & prevNodeActiv;   --- hidden layer maxtrix, h, Yong
	-- learningrate* h* A'(sigmoid)*error(cost_func), dw2 = A'*h, dw1= x*h'= x*A'*W2
	-- W1 = W1 + learningrate*dw1 *error(deltaKSum)
	-- X*W1 = h, h*w2 = f(x)= sigIn
	-- dw1 = dh *X = f(x)'* w2*X -- deritive rule
	-- extPrevNode -> X
	-------------------------------------
	-- Case remove sigmoid function, 
	-- X*w1*w2 = f(x) = SigIn, X*w1 = h, dw2 = X*w1 = h, dw1 = X*W2
	-- X = extPrevNode, 
	-- W2 = w2 + learningrate* dw2 = w2 + learningrate* (X*w1)*error
	-- W1 = w1 + learningrate*dw1 = w1 + learningrate*(X*w2)*error
	-- Yong
	multL : entity work.multiplier(behavioral)
		PORT MAP(in1 => learnRate, in2 => extPrevNode, output => leftMultTemp);
--	multR : entity work.multiplier(behavioral)				-- Yong, to remove sigmoid deritive
--		PORT MAP(in1 => extSigDer, in2 => deltaKSum, output => rightMultTemp);
	multAll : entity work.multiplier(behavioral)
--		PORT MAP(in1 => leftMultTemp, in2 => rightMultTemp, output => fullProd );
		PORT MAP(in1 => leftMultTemp, in2 => deltaKSum, output => fullProd );			-- Yong
		
	newWeight <= std_logic_vector(signed(fullProd) + signed(currWeight));
end Behavioral;

