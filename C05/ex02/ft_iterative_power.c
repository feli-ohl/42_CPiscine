/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foehler- felipitomundial@gmail.com         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:32:48 by foehler-          #+#    #+#             */
/*   Updated: 2025/07/16 20:39:04 by foehler-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	number;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	number = nb;
	while (i < power)
	{
		number = number * nb;
		i++;
	}
	return (number);
}
