int	ft_iterative_power(int nb, int power)
{
	int	result;
	
	result = nb;
	if (power <= 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}	
	
