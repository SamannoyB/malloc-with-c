#include <stdlib.h>
#include <stdio.h>

void main (void) {
  char *val = (char *)malloc(1000 * sizeof(val));

  if (val == NULL) {
    printf("Memory not available: Malloc failed.");
  }

  else {
    for (long int i = 0; i < 1000; i++) {
      val[i] = 'A';
    }

    for (long int i = 0; i < 1000; i++ ) {
      printf("%c", val[i]);
    }
  }

  free(val);
}
