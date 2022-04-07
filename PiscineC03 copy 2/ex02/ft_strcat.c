/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:51:51 by cvazquez          #+#    #+#             */
/*   Updated: 2022/04/05 16:58:14 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *cadena)
{
	int	i;

	i = 0;
	while (cadena[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	puntero;
	int	i;

	i = 0;
	puntero = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[puntero] = src[i];
		i++;
		puntero++;
	}
	dest[puntero] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest[80] = "Hello";
	char	src[] = "World";
	
	//printf("Strcat original: \n");
	//printf("%s\n", strcat(dest, src));
	printf("Mi funcion: \n");
	printf("%s\n", ft_strcat(dest, src));
	return (0);
}*/
