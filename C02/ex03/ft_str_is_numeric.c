/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foehler- felipitomundial@gmail.com         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 20:41:53 by foehler-          #+#    #+#             */
/*   Updated: 2025/07/12 20:50:40 by foehler-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	is_numeric;
	int	i;

	is_numeric = 1;
	i = 0;
	while (is_numeric == 1 && str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
			is_numeric = 0;
		i++;
	}
	return (is_numeric);
}
