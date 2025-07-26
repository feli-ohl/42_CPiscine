/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foehler- felipitomundial@gmail.com         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 21:02:12 by foehler-          #+#    #+#             */
/*   Updated: 2025/07/14 14:19:10 by foehler-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	is_printable;
	int	i;

	is_printable = 1;
	i = 0;
	while (is_printable == 1 && str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			is_printable = 0;
		i++;
	}
	return (is_printable);
}
