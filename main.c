//adpadfs : main.c
//Written By: Bradley Sadowsky

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "adpadfs.h"

int main(int argc, char *argv[]) {
  long dig; //Stores output of strtol
  int len;  //Stores length of curse, equal to dig
  if ( argc == 2 ) {
    if ( isdigit(*argv[1]) ) {
      dig = strtol(argv[1], NULL, 10);
      len = dig;
      curse(len);
      printf("\n");
    }
    else {
      printf("usage: %s length\n", argv[0]);
    }
  } else {
    printf("usage: %s length\n", argv[0]);
  }
  return 0;
}
