/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foehler- felipitomundial@gmail.com         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 15:53:04 by foehler-          #+#    #+#             */
/*   Updated: 2025/07/19 12:47:33 by foehler-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*program_name;
	int		i;

	if (argc >= 0)
	{
		program_name = argv[0];
		i = 0;
		while (program_name[i] != '\0')
		{
			write(1, &program_name[i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
