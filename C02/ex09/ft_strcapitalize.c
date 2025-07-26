/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foehler- felipitomundial@gmail.com         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:23:40 by foehler-          #+#    #+#             */
/*   Updated: 2025/07/14 12:05:14 by foehler-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_uppercase_letter(char letter)
{
	if (letter >= 'a' && letter <= 'z')
		return (letter - 32);
	else
		return (letter);
}

char	ft_lowercase_letter(char letter)
{
	if (letter >= 'A' && letter <= 'Z')
		return (letter + 32);
	else
		return (letter);
}

int	ft_alphanumeric(char letter)
{
	if (letter < '0')
		return (0);
	else if (letter > '9' && letter < 'A')
		return (0);
	else if (letter > 'Z' && letter < 'a')
		return (0);
	else if (letter > 'z')
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	first_letter_in_a_word;
	int	i;

	first_letter_in_a_word = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_alphanumeric(str[i]) == 1)
		{
			if (first_letter_in_a_word == 1)
				str[i] = ft_uppercase_letter(str[i]);
			else
				str[i] = ft_lowercase_letter(str[i]);
			first_letter_in_a_word = 0;
		}
		else
			first_letter_in_a_word = 1;
		i++;
	}
	return (str);
}
