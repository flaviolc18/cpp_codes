#include <stdio.h>

int remainder(int a, int b)
{
    return a - (a / b) * b;
}

int mod(int a, int b)
{
    int r = a % b;
    return r < 0 ? r + b : r;
}

int main(int argc, char const *argv[])
{
  printf("rem %d mod %d\n", remainder(5,-3), mod(5,-3));
  return 0;
}