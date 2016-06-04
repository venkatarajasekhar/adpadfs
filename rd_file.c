/*adpadfs : rd_file.c
  Written By: Bradley Sadowsky */
#include "adpadfs.h"

int rd_file(char *argv[]) {
  int val;
  FILE * fn = fopen(argv[2], "r");
  
  fscanf(fn, "%d", &val);
  
  fclose(fn);
  return val;
}
