#include  <unistd.h>

int main(void)
{
  int a;
  int b;

  a = '0';
  b = '9';

  while(b >= a)
  {
    write(1, &b, 1);
    b -= 1; // or b--
  }
  write(1, "\n", 1);
}
