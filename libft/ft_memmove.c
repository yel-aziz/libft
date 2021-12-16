/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:50:12 by yel-aziz          #+#    #+#             */
/*   Updated: 2021/11/20 21:28:06 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dst;
	if (!dst && !src)
		return (0);
	if (s > d)
	{
		return (ft_memcpy(d, s, len));
	}
	else
	{
		while (len--)
		{
			d[len] = s[len];
		}
		return (d);
	}
}

// int main()
// {
//     char *c;

//     char src[]= "yassir";

//     char dst[]="yassi";

//     c = ft_memmove(src+3,dst,3);

//     printf("%s",c);
// }

//  int main(){
// char t[150]="hello kkhhk rgoi eijgio s ijgsgi os";
// char b[20]="22050125166216416",v[20]="22050125166216416";
//  ft_memmove(b,t,20);
// memmove(v,t,20);*/
//  char t1[11];
//  char s[11] = "helloworld";
// printf("|%s|\n",memmove(t1,s + 5,15));
// // printf("|%s|\n", ft_memmove(t1,s + 5,15));
// } 
