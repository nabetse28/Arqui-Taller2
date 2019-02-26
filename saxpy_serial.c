#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <omp.h>




int main(void)
{

    int XVAL = rand() % 10000;
    int YVAL = rand() % 10000;
    int AVAL = rand() % 10000;

    double start_time, run_time;

    int N = (1 << 15);

    printf("N: %d \n", N);
    int x[N];
    int y[N];
   


   for (int i = 0; i < N; i++) {
      x[i] = XVAL;
      y[i] = YVAL;
   }

   start_time = omp_get_wtime();


   for (int i = 0; i < N; ++i) {
      y[i] += AVAL * x[i];
   }

   
   run_time = omp_get_wtime() - start_time;
   printf("The time is: %f \n", run_time);
   

   
   return 0;
}