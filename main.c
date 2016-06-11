/*adpadfs : main.c
  Written By: Bradley Sadowsky */
#include "adpadfs.h"

int main(int argc, char *argv[]) {
  long dig; /*Stores output of strtol*/
  int len;  /*Stores length of curse, equal to dig*/

  if ( argc == 2 ) {
    if ( isdigit(*argv[1]) ) {
      dig = strtol(argv[1], NULL, 10);
      len = dig;
      curse(len);
      printf("\n");
    } else {
      printf("usage: %s [options] length\n", argv[0]);
    }
    
  } else if ( argc == 3 ) {
    int flen = strlen(argv[2]); /*Size of "filename" argument*/
    int same = strcmp(argv[1], "-f");
    if ( same == 0 && isalpha(*argv[2]) && flen > 6 ) {
      int end = strcmp(&argv[2][flen-6], ".curse"); /*Checks if ending is .curse*/
      if ( end == 0 ) {
        len = rd_file(argv);
        curse(len);
        printf("\n");
      } else {
        printf("Error: Not a curse file... Exiting.\n");
      }
    } else {
      printf("usage: %s [options] length\n", argv[0]);
    }
    
  } else {
    printf("usage: %s [options] length\n", argv[0]);
    printf("Entering automated Adpadfs...\n");
    a_wrapper(); /* Calls wrapper function */
  }
  return 0;
}
