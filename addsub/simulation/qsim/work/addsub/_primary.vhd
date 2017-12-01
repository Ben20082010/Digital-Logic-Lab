library verilog;
use verilog.vl_types.all;
entity addsub is
    port(
        Carry_out       : out    vl_logic;
        addsub          : in     vl_logic;
        A               : in     vl_logic_vector(3 downto 0);
        B               : in     vl_logic_vector(3 downto 0);
        S               : out    vl_logic_vector(3 downto 0)
    );
end addsub;
