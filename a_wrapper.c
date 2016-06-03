/*adpadfs : a_wrapper.c
  Written By: Bradley Sadowsky */
#include "adpadfs.h"

int a_wrapper(void) {
  char *len;
  int length;
  printf("Automated Adpadfs System Version 1.0.0\n");
  printf("Input Curse Length: ");
  scanf("%s", &len);
    
  long leng = strtol(len, NULL, 10);
  length = leng;
  
  if ( isdigit(length) ) {
    curse(length);
    printf("\n");
  } else if ( isalpha(length) ) {
    printf("Error: Input not digit--Exiting.\n");
  } else {
    printf("Error: Input not recognized--Exiting.\n");
  }
  return 0;
}
