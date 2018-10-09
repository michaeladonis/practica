#include  <unistd.h>

void ft_print_numbers(void)
{
  int a;
  int b;

  a = '0';
  b = '9';

  while (a <= b)
  {
    write(1, &a, 1);
    a += 1;
  }
}
int main()
{
  ft_print_numbers();
  return (0);
}
