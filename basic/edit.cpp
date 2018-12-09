#include <cstdlib>
#include <string>

int main(int argc, char const *argv[])
{
  system(strcat("vim ", argv[0]));
  return 0;
}
