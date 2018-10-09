/*
** declare an index
** set our index to 0
** while our src[] at index is not equal to '\0'
**  set dst[] at index to src[] at index
**  Thusly, copy over src to dst
**  index++
** when the while condition is broke,
** set the current index of dst to the current index of src
** return the dst[]
*/
#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (dest[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// DO NOT SUBMIT ANYTHING BELOW

int main()
{
 char src[] = "abcdefghiklmnopqrstuvwxyz";
 char dest[] = "abc";

 printf("%s", ft_strcpy(src, dest));

 return(0);
}
