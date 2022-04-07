/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:32:05 by cvazquez          #+#    #+#             */
/*   Updated: 2022/04/04 19:27:11 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	valor_retorno;

	valor_retorno = 0;
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
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
/*
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char s1[] = "131";
	char s2[] = "132";

	int res_orig = strcmp(s1, s2);
	printf("StrCmp original: ");
	printf("%d\n", res_orig);
	int res_mifuncion = ft_strcmp(s1, s2);
	printf("Mi funcion: ");
	printf("%d\n", res_mifuncion);

	return (0);
	}*/
