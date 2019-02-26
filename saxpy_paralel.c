#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <omp.h>

int main() {

    int XVAL = rand() % 10000;
    int YVAL = rand() % 10000;
    int AVAL = rand() % 10000;

    double start_time, run_time;

    int N = (1 << 15);

    int x[N];
    int y[N];

   int g_num_threads = omp_get_num_threads();


#pragma omp parallel
   for (int i = 0; i < N; ++i) {
      int num_threads = omp_get_num_threads();
      g_num_threads = num_threads;
      x[i] = XVAL;
      y[i] = YVAL;
   }
   printf("Number of threads: %d \n", g_num_threads);

   start_time = omp_get_wtime();
#pragma omp parallel
   {
      int num_threads = omp_get_num_threads();
      for (int i=omp_get_thread_num(); i< N; i+=num_threads)
         y[i] += AVAL * x[i];
   }

   run_time = omp_get_wtime() - start_time;
   printf("The time is: %f \n", run_time);
   

   
   return 0;
}