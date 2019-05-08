//  #include <unistd.h>
   #include <stdlib.h>
    #include <iostream>
    #include <algorithm>
    #include <chrono>
    #include <unistd.h>
   #include <omp.h>
   #include <stdio.h>
   #define THREADS 10
   #include <time.h>
   using namespace std;
   #define N 100000000
   int main ( ) {
     int i;
     printf("Running %d iterations on %d threads dynamically.\n", N, THREADS);
   
    
     #pragma omp parallel for schedule(dynamic) num_threads(THREADS)
     for (i = 0; i < N; i++) {
       /* a loop that doesn’t take very long */
     }

     printf("All done!\n");
     return 0;
}
