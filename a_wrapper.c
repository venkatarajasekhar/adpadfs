/*adpadfs : a_wrapper.c
  Written By: Bradley Sadowsky */
#include "adpadfs.h"

int a_wrapper(void) {
  int length;
  printf("Automated Adpadfs System Version %s\n", VER);
  printf("Input Curse Length: ");
  scanf("%d", &length);
  
  curse(length);
  printf("\n");
  chk_egg(length);
  return 0;
}
