int	ft_sqrt(int nb)
{
	int	index;

	index = nb;
	while (index > 1)
	{
		if (((nb / index) == index) && (nb % index == 0))
			return (index);
		index--;
	}
	return (0);
}

