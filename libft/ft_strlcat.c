/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:02:15 by yel-aziz          #+#    #+#             */
/*   Updated: 2021/11/19 15:50:27 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	i;
	size_t	rtn;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (dstsize == 0)
		return (j);
	if (dstsize <= i)
		rtn = dstsize + j;
	else
		rtn = i + j;
	j = 0;
	while (src[j] && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (rtn);
}
/* int main()
{
    char d[10]="yassir";
    char s[10]="Bertgerge";

    char b[10]="yassir";
   char k[10]="Bertgerge";
    int r=0;
    int t=0;
   t = strlcat(b, k,10);
   printf("%d\t %s \t %s\n",t,b,k);

    r = ft_strlcat(d, s, 10);
    printf("%d\t %s \t %s",r,d,s);
} */
