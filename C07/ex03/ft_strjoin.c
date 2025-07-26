/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foehler- felipitomundial@gmail.com         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 10:00:10 by foehler-          #+#    #+#             */
/*   Updated: 2025/07/24 18:19:46 by foehler-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_get_total_length(int size, char **strs, char *sep)
{
	int	sep_len;
	int	word_traverser;
	int	total_len;
	int	word_len;

	sep_len = 0;
	while (sep[sep_len] != '\0')
		sep_len++;
	word_traverser = 0;
	total_len = 0;
	while (word_traverser < size)
	{
		word_len = 0;
		while (strs[word_traverser][word_len] != '\0')
		{
			total_len++;
			word_len++;
		}
		word_traverser++;
	}
	return (total_len + (sep_len * (size - 1)));
}

void	ft_write_string(char *str, int size, char **strs, char *sep)
{
	int	word_traverser;
	int	str_traverser;
	int	i;

	word_traverser = 0;
	str_traverser = 0;
	while (word_traverser < size)
	{
		i = 0;
		while (strs[word_traverser][i] != '\0')
			str[str_traverser++] = strs[word_traverser][i++];
		if (word_traverser < size - 1)
		{
			i = 0;
			while (sep[i] != '\0')
				str[str_traverser++] = sep[i++];
		}
		word_traverser++;
	}
	str[str_traverser] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		str_len;

	if (size == 0)
	{
		str = malloc(1);
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
	}
	else
	{
		str_len = ft_get_total_length(size, strs, sep);
		str = malloc(str_len + 1);
		if (str == NULL)
			return (NULL);
		ft_write_string(str, size, strs, sep);
	}
	return (str);
}

//MAIN/////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int	main(void)
{
	char	*strs[] = {"hola", "como", "estás"};
	int	size = 3;
	char	*sep = " - ";
	char	*str;
       	str = ft_strjoin(size, strs, sep);
	printf("%s", str);
	free(str);
	return (0);
}
