#Project: 
Allow a shared computer to run smoothly when it is being used by students in a CUDA GPU programming course.

TA_Utilities.cpp/hpp provide functions that programatically limit the execution time of the function and select the GPU with the lowest temperature to use for kernel calls.

#Prerequisites: 
Must be running on a UNIX machine

#Independent testing info:
Compile on commandline: nvcc test.cpp TA_Utilities.cpp -o test
run on commandline: ./test

Author: Jordan Bonilla
Date  : April 2016
License: All rights Reserved. See LICENSE.txt
