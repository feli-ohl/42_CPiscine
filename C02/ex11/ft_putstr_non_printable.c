/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foehler- felipitomundial@gmail.com         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:43:55 by foehler-          #+#    #+#             */
/*   Updated: 2025/07/14 16:48:22 by foehler-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hexadecimal(char *hex1, char *hex2, int dec)
{
	if (dec % 16 <= 9)
		*hex2 = dec % 16 + '0';
	else
		*hex2 = dec % 16 - 10 + 'a';
	if ((dec / 16) % 16 <= 9)
		*hex1 = (dec / 16) % 16 + '0';
	else
		*hex1 = (dec / 16) % 16 - 10 + 'a';
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex1;
	char	hex2;
	char	backslash;

	i = 0;
	backslash = '\\';
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
		{
			write(1, &backslash, 1);
			ft_hexadecimal(&hex1, &hex2, str[i]);
			write(1, &hex1, 1);
			write(1, &hex2, 1);
		}
		i++;
	}
}
