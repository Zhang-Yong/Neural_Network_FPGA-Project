
# PlanAhead Launch Script for Post PAR Floorplanning, created by Project Navigator

create_project -name LearningNetwork -dir "E:/Xilinx/Neural_FPGA_Project/LearningNetwork/planAhead_run_3" -part xc6slx9tqg144-2
set srcset [get_property srcset [current_run -impl]]
set_property design_mode GateLvl $srcset
set_property edif_top_file "E:/Xilinx/Neural_FPGA_Project/LearningNetwork/LearningNetwork.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {E:/Xilinx/Neural_FPGA_Project/LearningNetwork} }
set_property target_constrs_file "LearningNetwork.ucf" [current_fileset -constrset]
add_files [list {LearningNetwork.ucf}] -fileset [get_property constrset [current_run]]
link_design
read_xdl -file "E:/Xilinx/Neural_FPGA_Project/LearningNetwork/LearningNetwork.ncd"
if {[catch {read_twx -name results_1 -file "E:/Xilinx/Neural_FPGA_Project/LearningNetwork/LearningNetwork.twx"} eInfo]} {
   puts "WARNING: there was a problem importing \"E:/Xilinx/Neural_FPGA_Project/LearningNetwork/LearningNetwork.twx\": $eInfo"
}
