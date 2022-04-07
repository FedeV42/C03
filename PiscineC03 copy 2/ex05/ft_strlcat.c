/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:37:24 by cvazquez          #+#    #+#             */
/*   Updated: 2022/04/05 16:19:52 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size_dest)
{
    unsigned int i;
    unsigned int j;
    unsigned int puntero = ft_strlen(dest);
    unsigned int tam = ft_strlen(dest);
    unsigned int tam_src = ft_strlen(src);
    
    i = 0;
    j = 0;
    
    while (src[j] != '\0')
    {
        while (dest[puntero] !='\0' && tam_src < (size_dest - tam - 1))
        {
        dest[puntero] = src[i];
        puntero++;
        i++; 
        }
    j++;
    }
    dest[puntero] = '\0';

    return(tam + tam_src);
}
/*strlcat() appends string src to the end of dst.  It will append at most
     dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
     dstsize is 0 or the original dst string was longer than dstsize (in prac-
     tice this should not happen as it means that either dstsize is incorrect
     or that dst is not a proper string).

     If the src and dst strings overlap, the behavior is undefined.
     If the return value is >= dstsize, the output string has been truncated.
     It is the caller's responsibility to handle this.
     take the full size of the destination buffer and
     guarantee NUL-termination if there is room.  Note that room for the NUL
     should be included in dstsize.
     

if (strlcat(pname, file, sizeof(pname)) >= sizeof(pname))
                   return(error);*/