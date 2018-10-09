#include <unistd.h>
int main(void)
{
  int low;
  int up;

  low = 'a';
  up = 'B';

  while(low < 'z')
  {
    write(1, &low, 1);
    write(1, &up, 1);

    low += 2;
    up += 2;
  }
  write(1, "\n", 1);
}
