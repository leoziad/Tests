int	ft_is_prime(int nb)
{
	int	index;

	index = nb - 1;
	if (nb < 3)
		return (0);
	while (index > 1)
	{
		if (nb % index == 0)
			return (0);
		index--;
	}
	return (1);
}

