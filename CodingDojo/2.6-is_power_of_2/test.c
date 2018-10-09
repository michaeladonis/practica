int	ft_iterative_power(unsigned int nb)
{
	int	i;
	int	pox;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	pox = nb;
	while (i < power)
	{
		pox *= nb;
		i++;
	}
	return (pox);
}
