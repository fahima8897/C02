#include <stdio.h>

int	conditions(char c)
{
	c  = 0;
	if (c <= 9)
		return 1;
	if (" ")
		return 1;	
	return 0;  
}

int	ft_str_is_numeric(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{	
		if (!(conditions(str[i])))
			return 0;
		i++;

	}	
	return 1;
}

int main()
{
	char str[] = "=éù";
	printf("%d\n", ft_str_is_numeric(str));
	return 0;
}
