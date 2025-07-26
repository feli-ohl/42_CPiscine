/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foehler- felipitomundial@gmail.com         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:29:48 by foehler-          #+#    #+#             */
/*   Updated: 2025/07/16 18:15:22 by foehler-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_valid_base(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_print_digits(char *digits, char *base, int base_size)
{
	int	i;
	int	j;
	int	number;

	i = 0;
	number = 0;
	while (digits[i] != '\0')
	{
		j = 0;
		while (base[j] != digits[i] && base[j] != '\0')
			j++;
		if (base[j] == '\0')
			return (number);
		number = (number * base_size) + j;
		i++;
	}
	return (number);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	base_size;

	if (ft_valid_base(base) == 0)
		return (0);
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	sign = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	base_size = 0;
	while (base[base_size] != '\0')
		base_size++;
	return (ft_print_digits(&str[i], base, base_size) * sign);
}
