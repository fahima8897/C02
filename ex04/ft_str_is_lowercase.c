/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 15:40:17 by fboumell          #+#    #+#             */
/*   Updated: 2021/02/14 16:38:06 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	conditions(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

int	ft_str_lowercase(char *str)
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
	char tab [] = "[[]";
	prinntf("%d\n", ft_str_is_lowercase(tab));
	return 0;
}
