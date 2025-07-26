/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foehler- felipitomundial@gmail.com         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 20:57:36 by foehler-          #+#    #+#             */
/*   Updated: 2025/07/12 20:59:28 by foehler-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	is_uppercase;
	int	i;

	is_uppercase = 1;
	i = 0;
	while (is_uppercase == 1 && str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
			is_uppercase = 0;
		i++;
	}
	return (is_uppercase);
}
