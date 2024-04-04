#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "../src/lab.h"

int main(int argc, char **argv)
{
  int c;
  while ((c = getopt (argc, argv, "v")) != -1) {
    switch (c)
      {
        case 'v':
          fprintf (stderr, "lab_VERSION_MAJOR\n", lab_VERSION_MAJOR);
          fprintf (stderr, "lab_VERSION_MINOR\n", lab_VERSION_MINOR);
          break;
        default:
          abort ();
      }
  }
    
  return 0;
}
