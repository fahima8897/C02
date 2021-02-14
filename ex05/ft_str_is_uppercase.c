/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 16:39:29 by fboumell          #+#    #+#             */
/*   Updated: 2021/02/14 16:44:47 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	conditions(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(conditions(str[i])))
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	char tab[] = "\0";
	printf("%d\n", ft_str_is-uppercase(tab));
	return 0;
}
