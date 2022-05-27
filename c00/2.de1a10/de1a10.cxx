///
/// de1a10.cxx
///
/// programa que cuenta 1 a 10
///

#include <stdio.h>

int main()
{
  int i = 1;
  while (i <= 10) {
    fprintf(stdout, "%d\n", i);
    i = i + 1;
  }
  return 0;
}

// Ejercicio: definir una constante entera N para el numero 10
