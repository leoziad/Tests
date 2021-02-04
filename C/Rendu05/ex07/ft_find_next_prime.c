int	ft_find_next_prime(int nb)
{
	int	index;

	index = nb - 1;
	if (nb < 3)
		return (3);
	while (index > 1)
	{
		if (nb % index == 0)
			break;
		index--;
	}
	if (index > 1)
		return (ft_find_next_prime(nb + 1));
	else
		return (nb);
}

