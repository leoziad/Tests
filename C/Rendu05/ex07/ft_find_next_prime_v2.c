int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	if (nb < 3)
		return (3);
	if (ft_is_prime(nb))
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}

