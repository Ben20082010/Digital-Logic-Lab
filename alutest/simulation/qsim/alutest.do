onerror {exit -code 1}
vlib work
vlog -work work alutest.vo
vlog -work work Waveform.vwf.vt
vsim -novopt -c -t 1ps -L cycloneive_ver -L altera_ver -L altera_mf_ver -L 220model_ver -L sgate_ver -L altera_lnsim_ver work.alutest_vlg_vec_tst -voptargs="+acc"
vcd file -direction alutest.msim.vcd
vcd add -internal alutest_vlg_vec_tst/*
vcd add -internal alutest_vlg_vec_tst/i1/*
run -all
quit -f
