/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:32:11 by cvazquez          #+#    #+#             */
/*   Updated: 2022/04/04 19:28:19 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				valor_retorno;

	i = 0;
	valor_retorno = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		valor_retorno = s1[i] - s2[i];
		if (valor_retorno != 0)
		{
			return (valor_retorno);
		}
		i++;
	}
	return (valor_retorno);
}

/*#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char			s1[] = "Hola Mundo";
	char			s2[] = "Hello World";
	unsigned int	n;
	int				res_orig;
	unsigned int	res_mifuncion;

	n = 5;
	res_orig = strncmp(s1, s2, n);
	printf("StrCmp original: ");
	printf("%d\n", res_orig);
	res_mifuncion = ft_strncmp(s1, s2, n);
	printf("Mi funcion: ");
	printf("%d\n", res_mifuncion);
	return (0);
}*/
