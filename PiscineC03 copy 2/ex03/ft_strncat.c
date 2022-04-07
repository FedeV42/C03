/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:43:52 by cvazquez          #+#    #+#             */
/*   Updated: 2022/04/04 23:06:06 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_counter(char *src)
{
	unsigned int	counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	puntero;

	i = 0;
	puntero = ft_counter(dest);
	while (src[i] != '\0' && i < nb)
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

char			*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char			dest[50] = "Hello";
	char			src[20] = "World";
	unsigned int	nb;

	nb = 2;
	printf("Strcat original:\n");
	printf("%s\n", strncat(dest, src, nb));
	printf("Mi funcion:\n");
	//printf("%s\n", ft_strncat(dest, src, nb));
	return (0);
}*/
