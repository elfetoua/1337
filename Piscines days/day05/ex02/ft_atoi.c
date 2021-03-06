/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfetoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 18:16:17 by elfetoua          #+#    #+#             */
/*   Updated: 2019/02/27 16:33:23 by elfetoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int					i;
	int					negative;
	unsigned int		number;

	negative = 0;
	while (*str >= 0 && *str <= 32)
		str++;
	if (*str == '-')
	{
		negative = 1;
		str++;
	}
	else if (*str == '+')
		str++;
	number = 0;
	i = *str - '0';
	while (i >= 0 && i <= 9 && *str != '\0')
	{
		number = number * 10 + i;
		str++;
		i = *str - '0';
	}
	if (negative)
		number = number * -1;
	return (number);
}
