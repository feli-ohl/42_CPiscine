/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foehler- felipitomundial@gmail.com         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 17:11:06 by foehler-          #+#    #+#             */
/*   Updated: 2025/07/12 17:13:31 by foehler-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	letter;

	letter = *str;
	while (letter != '\0')
	{
		write(1, &letter, 1);
		str = str + 1;
		letter = *str;
	}
}
