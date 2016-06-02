/*adpadfs : a_wrapper.c
  Written By: Bradley Sadowsky */
#include "adpadfs.h"

int a_wrapper(void) {
  int length;
  printf("Automated Adpadfs System Version 1.0.0\n");
  printf("Input Curse Length: ");
  scanf("%d", &length);
  
  if ( isdigit(length) ) {
    curse(length);
    printf("\n");
  } else {
    printf("Error: Input not digit--Exiting.\n");
  }
  return 0;
}
