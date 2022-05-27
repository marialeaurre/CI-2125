///
/// args.cxx
///

#include <stdio.h>

int main(int argc, const char *argv[])
{
  fprintf(stdout, "argc: %d\n\n", argc);
  int i = 0;
  while (i < argc) {
    fprintf(stdout, "argv[%d]: %s\n", i, argv[i]);
    i = i + 1;
  }
  return 0;
}
