/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foehler- felipitomundial@gmail.com         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:44:53 by foehler-          #+#    #+#             */
/*   Updated: 2025/07/16 17:27:04 by foehler-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_valid_base(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_negative(long *num)
{
	if (*num < 0)
	{
		write(1, "-", 1);
		*num = -*num;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_size;
	long	num;

	if (ft_valid_base(base) == 1)
	{
		num = nbr;
		ft_negative(&num);
		base_size = 0;
		while (base[base_size] != '\0')
			base_size++;
		if (num / base_size != 0)
			ft_putnbr_base(num / base_size, base);
		write(1, &base[num % base_size], 1);
	}
}
