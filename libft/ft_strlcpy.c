/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:59:56 by yel-aziz          #+#    #+#             */
/*   Updated: 2021/11/20 21:25:11 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (src[i])
	{
		i++;
	}	
	j = 0;
	if (dstsize > 0)
	{
		while (src[j] && j < (dstsize - 1))
		{
			dst[j] = src[j];
			j++;
		}
	dst[j] = '\0';
	}
	return (i);
}
/*  int main()
 {
     char dst[100];
     char src[100] = "yassirjhky";

        int p;

        p = ft_strlcpy(dst,src,4);

        printf("%s\n%s\n%d",dst,src,p);


     
 } */
