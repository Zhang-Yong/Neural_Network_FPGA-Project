-------------------------------------------------------
-- Design Name : ram_sp_sr_sw
-- File Name   : ram_sp_sr_sw.vhd
-- Function    : Synchronous read write RAM 
-- Coder       : Deepak Kumar Tala (Verilog)
-- Translator  : Alexander H Pham (VHDL)
-------------------------------------------------------
library ieee;
    use ieee.std_logic_1164.all;
    use ieee.std_logic_unsigned.all;

entity ram_sp_ar_sw is
    generic (
        DATA_WIDTH :integer := 8;
        ADDR_WIDTH :integer := 8
    );
    port (
        clk     :in    std_logic;                                 -- Clock Input
        address :in    std_logic_vector (ADDR_WIDTH-1 downto 0);  -- address Input
        data    :inout std_logic_vector (DATA_WIDTH-1 downto 0);  -- data bi-directional
        cs      :in    std_logic;                                 -- Chip Select
        we      :in    std_logic;                                 -- Write Enable/Read Enable
        oe      :in    std_logic                                  -- Output Enable

    );
end entity;
architecture rtl of ram_sp_ar_sw is
    ----------------Internal variables----------------
    constant RAM_DEPTH :integer := 2**ADDR_WIDTH;

    signal data_out :std_logic_vector (DATA_WIDTH-1 downto 0);

    type RAM is array (integer range <>)of std_logic_vector (DATA_WIDTH-1 downto 0);
    signal mem : RAM (0 to RAM_DEPTH-1);
begin

    ----------------Code Starts Here------------------
    -- Tri-State Buffer control
    -- output : When we = 0, oe = 1, cs = 1
    data <= data_out when (cs = '1' and oe = '1' and we = '0') else (others=>'Z');		-- Understand, this is IO logic
																							-- data_out is between internal logic and data port		

    -- Memory Write Block
    -- Write Operation : When we = 1, cs = 1
    MEM_WRITE:
    process (clk) begin
        if (rising_edge(clk)) then
            if (cs = '1' and we = '1') then
                mem(conv_integer(address)) <= data;			-- data input
            end if;
        end if;
    end process;

    -- Memory Read Block
    -- Read Operation : When we = 0, oe = 1, cs = 1
    MEM_READ:
    process (clk) begin
        if (rising_edge(clk)) then
            if (cs = '1' and we = '0' and oe = '1') then
                 data_out <= mem(conv_integer(address));		-- then data <= data_out
            end if;
        end if;
    end process;

end architecture;
