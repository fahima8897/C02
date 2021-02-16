/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 09:03:35 by fboumell          #+#    #+#             */
/*   Updated: 2021/02/15 10:41:46 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	conditions(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return 0;
}

int	ft_str_is_printable(char *str)
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
	char *tab = "\0";
	printf("%d\n", ft_str_is_printable(tab));
	return 0;
}
