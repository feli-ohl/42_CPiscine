/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foehler- felipitomundial@gmail.com         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 19:16:08 by foehler-          #+#    #+#             */
/*   Updated: 2025/07/24 18:16:00 by foehler-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*dup;

	if (src == NULL)
		return (NULL);
	size = 0;
	while (src[size] != '\0')
		size++;
	dup = malloc(size + 1);
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

//MAIN//////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int	main(void)
{
	char	*src = "Hola mundo!";
	char	*dup = ft_strdup(src);
	printf("%s\n%s", src, dup);
	return (0);
}
