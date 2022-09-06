/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyie-xua <lyie-xua@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:14:10 by lyie-xua          #+#    #+#             */
/*   Updated: 2022/08/25 20:46:21 by lyie-xua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	while (str[n] != '\0')
	{
		if (i == 0 && (str[n] >= 'a' && str[n] <= 'z'))
		{
			str[n] -= 32;
			i++;
		}
		else if (i > 0 && (str[n] >= 'A' && str[n] <= 'Z'))
			str[n] += 32;
		else if ((str[n] < '0') || (str[n] > '9' && str[n] < 'A')
			|| (str[n] > 'Z' && str[n] < 'a') || (str[n] > 'z'))
			i = 0;
		else
			i++;
		n++;
	}
	return (str);
}
