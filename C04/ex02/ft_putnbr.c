/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foehler- felipitomundial@gmail.com         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 11:16:22 by foehler-          #+#    #+#             */
/*   Updated: 2025/07/16 17:06:33 by foehler-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_negative(long *num)
{
	if (*num < 0)
	{
		write(1, "-", 1);
		*num = -*num;
	}
}

void	ft_putnbr(int nb)
{
	long	num;
	char	last_digit;

	num = nb;
	ft_negative(&num);
	if (num / 10 > 0)
		ft_putnbr(num / 10);
	last_digit = (num % 10) + '0';
	write(1, &last_digit, 1);
}
