#include <unistd.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

using namespace std;


#include <iostream>
#include <algorithm>
#include <chrono>
#include <unistd.h>
#include <omp.h>


#define THREADS 10
#define N 100000000
int main ( ) {
  int i;
  printf("Running %d iterations on %d threads statically.\n", N, THREADS);
    
  #pragma omp parallel for schedule(static) num_threads(THREADS)
  for (i = 0; i < N; i++) {
    /* a loop that doesn’t take very long */
  }
  /* all threads done */


  printf("All done!\n");
  return 0;
}
