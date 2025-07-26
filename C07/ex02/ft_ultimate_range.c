/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foehler- felipitomundial@gmail.com         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 21:11:17 by foehler-          #+#    #+#             */
/*   Updated: 2025/07/19 09:50:47 by foehler-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * 4);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
/*
//MAIN//////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int	main(void)
{
	int	min = 0;
	int	max = 10;
	int	*range;
	int	range_size = ft_ultimate_range(&range, min, max);
	if (range_size == -1)
		printf("Error when creating array\n");
	else
	{
		int	i = 0;
		while (i < range_size)
		{
			printf("%d - ", range[i]);
			i++;
		}
		printf("\nSize: %d\n", range_size);
	}
	return (0);
}
*/
