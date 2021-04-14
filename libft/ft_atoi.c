/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzylberm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 11:49:37 by lzylberm          #+#    #+#             */
/*   Updated: 2021/04/01 14:07:33 by lzylberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_isspace(char c)
{
	if (c == 32 || c == '\n' || c == 9 || c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int				ft_atoi(char *str)
{
	int		index;
	int		sign;
	int		result;

	index = 0;
	result = 0;
	sign = 1;
	while (ft_isspace(str[index]))
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			sign = sign * -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = result * 10 + str[index] - 48;
		index++;
	}
	return (result * sign);
}
