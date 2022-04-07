/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:28:08 by cvazquez          #+#    #+#             */
/*   Updated: 2022/04/05 16:20:41 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, int size_dest);

int	main()
{
	char			dest[5] = "Hello";
	char			src[20] = "World";
    int             size_dest = 15;

	printf("Strstr original:\n");
	//printf("%u\n", strlcat(dest, src, size_dest));
	printf("Mi funcion:\n");
	printf("%u\n", ft_strlcat(dest, src, size_dest));
	
	return (0);
}