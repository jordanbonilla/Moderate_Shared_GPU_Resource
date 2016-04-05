//--------------------------------------------------------------------------
// Project: 
// Allow a shared computer to run smoothly when it is being used
// by students in a CUDA GPU programming course.
//
// TA_Utilities.cpp/hpp provide functions that programatically limit
// the execution time of the function and select the GPU with the 
// lowest temperature to use for kernel calls.
//
// Prerequisites: 
// Must be running on a UNIX machine
//
// Independent testing info:
// Compile on commandline: nvcc test.cpp TA_Utilities.cpp -o test
// run on commandline: ./test
//
// Author: Jordan Bonilla
// Date  : April 2016
// License: All rights Reserved. See LICENSE.txt
//--------------------------------------------------------------------------\

#include "TA_Utilities.hpp"
#include <unistd.h>
int main() {
    // These functions allow you to select the least utilized GPU 
    // on your system as well as enforce a time limit on program execution.
    // Please leave these enabled as a courtesy to your fellow classmates
    // that are sharing this computer. You may ignore or remove these 
    // functions if you are running on your local machine.
    TA_Utilities::select_coldest_GPU();
    int max_time_allowed_in_seconds = 10;
    TA_Utilities::enforce_time_limit(max_time_allowed_in_seconds);
    // Your code...
    sleep(11);
    return 0;
}
