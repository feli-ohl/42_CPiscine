/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foehler- felipitomundial@gmail.com         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 16:22:13 by foehler-          #+#    #+#             */
/*   Updated: 2025/07/17 16:24:17 by foehler-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		arg_counter;
	int		i;
	char	*argument;

	if (argc > 1)
	{
		arg_counter = argc - 1;
		while (arg_counter > 0)
		{
			i = 0;
			argument = argv[arg_counter];
			while (argument[i] != '\0')
			{
				write(1, &argument[i], 1);
				i++;
			}
			write(1, "\n", 1);
			arg_counter--;
		}
	}
	return (0);
}
