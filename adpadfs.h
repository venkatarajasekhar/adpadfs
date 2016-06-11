/*adpadfs : adpadfs.h
  Written By: Bradley Sadowsky */

#ifndef ADPADFS_H_
#define ADPADFS_H_

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>

#define VER "3.2.1"

enum lstat {dead = 0, live = 1}; /*Life Status*/
typedef enum lstat lstat;

int curse(int len);
int mid_finger(void);
int a_wrapper(void);
int rd_file(char *argv[]);
int chk_file(char *fname);
void chk_egg(int egg);

#endif
