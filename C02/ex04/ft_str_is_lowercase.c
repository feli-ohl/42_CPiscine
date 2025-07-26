/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foehler- felipitomundial@gmail.com         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 20:52:20 by foehler-          #+#    #+#             */
/*   Updated: 2025/07/12 20:55:11 by foehler-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	is_lowercase;
	int	i;

	is_lowercase = 1;
	i = 0;
	while (is_lowercase == 1 && str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
			is_lowercase = 0;
		i++;
	}
	return (is_lowercase);
}
