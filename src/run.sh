#/bin/bash
###############################
#
#   argv[1] = ANTI, INDE, CORR, other
#
#	argv[2] : if  argv[1]==other : dataset path
# 			  if  argv[1]!=other : k = distinct values 
#	
#	argv[3] : omega = lifetime 
#
#	argv[4] : cycles = generations
#
#	argv[5] : d = space or number of attributes
#
#	argv[6] : NBTHREARDS = number of parallel threads to be run.
#
# 	argv[7] : batch interval

./main INDE 100 432000 2 12 4 6000

