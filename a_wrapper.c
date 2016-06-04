/*adpadfs : a_wrapper.c
  Written By: Bradley Sadowsky */
#include "adpadfs.h"

int a_wrapper(void) {
  int length;
  printf("Automated Adpadfs System Version 2.0.0\n");
  printf("Input Curse Length: ");
  scanf("%d", &length);
  
  curse(length);
  printf("\n");
  chk_egg(length);
  return 0;
}
