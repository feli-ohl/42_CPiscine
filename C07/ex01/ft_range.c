/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foehler- felipitomundial@gmail.com         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 19:33:14 by foehler-          #+#    #+#             */
/*   Updated: 2025/07/17 20:16:01 by foehler-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
		return (NULL);
	array = malloc((max - min) * 4);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < (max - min))
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
/*

//MAIN//////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int	main(void)
{
	int	min = 0;
	int	max = 10;
	int	*array = ft_range(min, max);
	int	i = 0;
	while (i < max - min)
	{
		printf(" %d -", array[i]);
		i++;
	}
	return (0);
}

*/
