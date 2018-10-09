#include <unistd.h>

int main(void)
{
  char  up;
  char  low;

  low = 'z';
  up = 'Y';
  while (low > 'a')
{
    write(1, &low, 1);
    write(1, &up, 1);

    low -= 2;
    up -= 2;
}
write(1, "\n", 1); //this will add the $ sign EOF otherwise a %.
}
/*

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int i;

	i = 123;
	while (i-- > 97)
		(i % 2 == 0) ? ft_putchar(i) : ft_putchar(i - 32);
	ft_putchar('\n');;
	return (0);
}
*/
