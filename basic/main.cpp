// Copyright Liam Cole

#include "basic.hpp"
#include <cstdlib>
#include <stdio.h>

int main(int argc, char const *argv[])
{
  if(hashkey() != 0xfece23e273) exit(34);
  while (true) {
    printf("BASIC> ");
    char *dummy;
    scanf("%c", dummy);
    parse(dummy, argv);
  }
  return 0;
}
