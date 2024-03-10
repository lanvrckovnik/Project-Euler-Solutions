#include <stdio.h>

int main(int argc, char const *argv[])
{
  int nums[500] = {0};
  nums[0] = 1;
  int sum = 0, carry = 0, len = 1;
  int i, j, temp;
  for (i = 0; i < 1000; i++)
  {
    for (j = 0; j < len + 1; j++)
    {
      temp = nums[j] * 2 / 10;
      nums[j] = nums[j] * 2 % 10 + carry;
      carry = temp;
    }
    if (nums[len] != 0)
    {
      len++;
    }
  }

  for (i = 0; i < len; i++)
  {
    sum += nums[i];
  }
  printf("%d", sum);

  return 0;
}
