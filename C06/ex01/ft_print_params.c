/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foehler- felipitomundial@gmail.com         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 16:13:34 by foehler-          #+#    #+#             */
/*   Updated: 2025/07/17 16:20:42 by foehler-         ###   ########.fr       */
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
		arg_counter = 1;
		while (arg_counter < argc)
		{
			i = 0;
			argument = argv[arg_counter];
			while (argument[i] != '\0')
			{
				write(1, &argument[i], 1);
				i++;
			}
			write(1, "\n", 1);
			arg_counter++;
		}
	}
	return (0);
}
