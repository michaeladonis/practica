#include <unistd.h>

char	*ft_strrev(char *str)
{
	int		count;
	int		x;
	char	y;

	count = 0;
	while (str[count] != '\0')
		count++;
	count = count - 1;
	x = 0;
	while (x < ((count + 1) / 2))
	{
		y = str[x];
		str[x] = str[count - x];
		str[count - x] = y;
		x++;
	}
	return (str);
}
