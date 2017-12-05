library verilog;
use verilog.vl_types.all;
entity alutest is
    port(
        Carry_out       : out    vl_logic;
        CLK_instruction : in     vl_logic;
        A               : out    vl_logic_vector(3 downto 0);
        CLK_num         : in     vl_logic;
        B               : out    vl_logic_vector(3 downto 0);
        s               : out    vl_logic_vector(3 downto 0)
    );
end alutest;
