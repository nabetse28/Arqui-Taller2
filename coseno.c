/*

This program is used to calculate the cos(x) of an angle,
with a Taylor Serie.

#---------------------------------------------------------------

Made by Esteban Herrera Vargas

#-----------------------------------------------------------------

*/

#include <stdio.h>
#include <omp.h>
#include <math.h>

static long num_steps = 100000000;
double step;

int factorial(int n){

    int fac = 1;
    int i;
    if( n == 0 || n == 1){
        return 1;
    }else{

        #pragma omp parallel for private(i) reduction(*:fac)
        
            for(i=1; i <= n; i++){
                fac = fac * i;
                //printf("i: %d\n",i);
            }

            //printf("fac(%d)=%d\n",n,fac);
        
    
        return fac;
    }

    return 0;
}



int main ()
{
    double start_time, run_time;
    int k;
    double f1,f2, f;
	double n = 15;
    float angle = 1.3;
    float seno = 0.0;

    start_time = omp_get_wtime();

    #pragma opm parallel for private(k,n) reduction(+:seno) 
    {

        for(k = 0; k < n; k++){
            f1 = pow(-1,k);
            f2 = pow(angle,2*k +1);
            f = factorial(2*k + 1);
            seno +=  f1*f2/ f;
            //printf("f1: %f\n f2: %f\n f: %f\n",f1,f2,f);
            //printf("seno -----> %f\n",seno);
        }

    }

        
    run_time = omp_get_wtime() - start_time;

    //coseno = pow(-1,2);
    printf("seno = %f\n", seno);
    fflush(stdout);

    
    printf("The time is %f\n", run_time);
    fflush(stdout);

    return 0;
	
}	  


