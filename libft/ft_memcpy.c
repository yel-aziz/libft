/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:32:26 by yel-aziz          #+#    #+#             */
/*   Updated: 2021/11/20 21:26:23 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
/* int main()
{
    char src[]= "abcdef";
    char dst[10];
    char *r;

    r = ft_memcpy(dst,src+2,3);
    printf("|%s|\n",r);

    char *e;
    char s[]= "abcdef";
    char a[10];

    e = memcpy(a,s+2,3);
    printf("|%s|\n",e);

}
 */
