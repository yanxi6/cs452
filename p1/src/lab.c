/**Update this file with the starter code**/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <readline/readline.h>
#include "lab.h"

char *getVersion(void)
{
  char *version = (char *)malloc(MAX_VERSION_STRING);
  snprintf(version, MAX_VERSION_STRING, "%d.%d", lab_VERSION_MAJOR, lab_VERSION_MINOR);
  return version;
}

int segfault(void)
{
  // add volatile because clang will optimize out the segfault
  volatile int *foo = (int *)malloc(sizeof(int));;
  int bar = *foo;
  free(foo);
  return bar;
}

void outOfBounds(void)
{
  int arr[5] = {0, 1, 2, 3, 4};
  int i = 0;
  for (i = 0; i < 5; i++)
    {
      arr[i] = i;
    }
  UNUSED(arr);
}