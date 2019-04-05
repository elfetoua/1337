/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfetoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 11:58:45 by elfetoua          #+#    #+#             */
/*   Updated: 2019/02/22 12:40:58 by elfetoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'j' && str[i] >= 'a')
			str[i] += 16;
		else if (str[i] >= 'j' && str[i] <= 'z')
			str[i] = 'a' + (15 - ('z' - str[i]));
		if (str[i] <= 'J' && str[i] >= 'A')
			str[i] += 16;
		else if (str[i] >= 'J' && str[i] <= 'Z')
			str[i] = 'A' + (15 - ('Z' - str[i]));
		i++;
	}
	return (str);
}