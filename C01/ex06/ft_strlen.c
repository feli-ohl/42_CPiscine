/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foehler- felipitomundial@gmail.com         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 17:15:35 by foehler-          #+#    #+#             */
/*   Updated: 2025/07/12 17:18:09 by foehler-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		length;
	char	letter;

	length = 0;
	letter = *str;
	while (letter != '\0')
	{
		length++;
		str = str + 1;
		letter = *str;
	}
	return (length);
}
