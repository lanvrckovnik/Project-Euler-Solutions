#include <stdio.h>

unsigned long int iterate(unsigned long int n)
{
  if (n % 2 == 0)
  {
    return n / 2;
  }
  else
  {
    return 3 * n + 1;
  }
}
int main(int argc, char const *argv[])
{
  unsigned int i;
  unsigned int max = 0;
  unsigned int max_i = 0;
  unsigned int path_length;
  unsigned long int n;
  for (i = 1; i < 1000000; i++)
  {
    path_length = 0;
    n = i;
    while (n != 1)
    {
      path_length++;
      n = iterate(n);
    }
    if (path_length > max)
    {
      max = path_length;
      max_i = i;
    }
  }

  printf("%u", max_i);
  return 0;
}
