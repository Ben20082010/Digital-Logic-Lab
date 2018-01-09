library verilog;
use verilog.vl_types.all;
entity fourbitadd is
    port(
        Carry_out       : out    vl_logic;
        A               : in     vl_logic_vector(3 downto 0);
        B               : in     vl_logic_vector(3 downto 0);
        Carry_in        : in     vl_logic;
        S               : out    vl_logic_vector(3 downto 0)
    );
end fourbitadd;
