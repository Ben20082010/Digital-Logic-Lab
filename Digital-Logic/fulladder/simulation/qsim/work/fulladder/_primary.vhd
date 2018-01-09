library verilog;
use verilog.vl_types.all;
entity fulladder is
    port(
        Sum             : out    vl_logic;
        A               : in     vl_logic;
        B               : in     vl_logic;
        Carry_in        : in     vl_logic;
        Carry_out       : out    vl_logic
    );
end fulladder;
