/**Update this file with the starter code**/
#ifndef LAB_H
#define LAB_H
#include <stdlib.h>
#include <stdbool.h>

#define MAX_VERSION_STRING 10
#define lab_VERSION_MAJOR 1
#define lab_VERSION_MINOR 0
#define UNUSED(x) (void)(x)

#ifdef __cplusplus
extern "C"
{
#endif

  /**
   * @brief Returns a string containing the version of the library.
   * This string has been allocated using malloc and must be freed
   * by the caller.
   *
   * @return char* The version string
   */
  char *getVersion(void);

  /**
   * @brief This function causes a segfault to demo Address Sanitizer
   *
   */
  int segfault(void);

  /**
   * @brief This function causes an array out of bounds error to
   * demo Address Sanitizer
   *
   */
  void outOfBounds(void);

#ifdef __cplusplus
} // extern "C"
#endif

#endif