library verilog;
use verilog.vl_types.all;
entity Nand2sim is
    port(
        X               : out    vl_logic;
        B               : in     vl_logic;
        A               : in     vl_logic
    );
end Nand2sim;
