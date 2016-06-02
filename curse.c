/*adpadfs : curse.c
  Written By: Bradley Sadowsky */
#include "adpadfs.h"

int curse(int len){
  for (; len != 0; len = len - 1){
    printf("*");
  }
  printf("\a");
  return 0;
}
