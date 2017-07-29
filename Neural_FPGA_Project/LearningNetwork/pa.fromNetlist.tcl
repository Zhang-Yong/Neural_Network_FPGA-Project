
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name LearningNetwork -dir "E:/Xilinx/Neural_FPGA_Project/LearningNetwork/planAhead_run_1" -part xc6slx9tqg144-2
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "E:/Xilinx/Neural_FPGA_Project/LearningNetwork/LearningNetwork.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {E:/Xilinx/Neural_FPGA_Project/LearningNetwork} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "LearningNetwork.ucf" [current_fileset -constrset]
add_files [list {LearningNetwork.ucf}] -fileset [get_property constrset [current_run]]
link_design
