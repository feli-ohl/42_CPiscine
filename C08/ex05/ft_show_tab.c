/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foehler- felipitomundial@gmail.com         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 12:44:16 by foehler-          #+#    #+#             */
/*   Updated: 2025/07/25 13:42:20 by foehler-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_print_int(int num)
{
	char	digit;

	if (num > 9)
		ft_print_int(num / 10);
	digit = (num % 10) + '0';
	write(1, &digit, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	if (par != NULL)
	{
		i = 0;
		while (par[i].str != 0)
		{
			ft_print_str(par[i].str);
			write(1, "\n", 1);
			ft_print_int(par[i].size);
			write(1, "\n", 1);
			ft_print_str(par[i].copy);
			write(1, "\n", 1);
			i++;
		}
	}
}
