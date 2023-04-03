#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>


// I used the psuedocode from homework 3 for help with code -Jacob 
void 
setup(int64_t N, uint64_t A[]){
   printf(" inside direct_sum problem_setup, N=%lld \n", N);// no setup needed for direct
}

int64_t
sum(int64_t N, uint64_t A[]){

   int64_t sum = 0;//set accumulator to 0
   for(int64_t i=0; i<N; i++){
      sum += i; // add indx to accumulator
}
return sum;
}

