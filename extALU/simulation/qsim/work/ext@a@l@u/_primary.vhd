library verilog;
use verilog.vl_types.all;
entity extALU is
    port(
        Carry_out       : out    vl_logic;
        SUB             : in     vl_logic;
        A               : in     vl_logic_vector(3 downto 0);
        B               : in     vl_logic_vector(3 downto 0);
        B_is_1          : in     vl_logic;
        S               : out    vl_logic_vector(3 downto 0)
    );
end extALU;
