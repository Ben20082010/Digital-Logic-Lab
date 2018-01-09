library verilog;
use verilog.vl_types.all;
entity HalfAdder is
    port(
        CARRY           : out    vl_logic;
        B               : in     vl_logic;
        A               : in     vl_logic;
        SUM             : out    vl_logic
    );
end HalfAdder;
