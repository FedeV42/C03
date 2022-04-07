/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:43:51 by cvazquez          #+#    #+#             */
/*   Updated: 2022/04/05 13:24:38 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char			str[50] = "Hello World";
	char			to_find[20] = "o";

	printf("Strstr original:\n");
	printf("%s\n", strstr(str, to_find));
	printf("Mi funcion:\n");
	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}
