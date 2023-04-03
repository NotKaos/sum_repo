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
   printf(" inside sum_indirect problem_setup, N=%lld \n", N);
   for (int64_t i = 0; i < N; i++){
      A[i] = lrand48() % N; // generates random numbers in A[]
   }

}

int64_t
sum(int64_t N, uint64_t A[]){
   
   int64_t sum = 0; //set accumulator = 0
   uint64_t indx = A[0]; 
   
   for (int64_t i = 0; i < N; i++){
      sum += A[indx];// add A[indx] to accumulator
      indx = A[indx];// assign index to A[indx]
   }
   return sum;
}

