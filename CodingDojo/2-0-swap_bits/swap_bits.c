#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int		main(void)
{
	char c;

	c = 't';
	write(1, &c, 1);
	c = swap_bits(c);
	write(1, &c, 1);
	return (0);
}
