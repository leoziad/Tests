int	ft_iterative_factorial(int nb)
{
	int	index;
	int	result;
	
	index = nb;
	result = 1;
	if (nb < 1 || nb % 1 != 0)
		return(0);
	while (index > 0)
	{
		result = result * index;
		index--;
	}
	return(result);
}

