/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:58:12 by yel-aziz          #+#    #+#             */
/*   Updated: 2021/11/18 22:04:57 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*b;

	b = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (b[i] == (unsigned char )c)
		{
			return (&b[i]);
		}
		i++;
	}
	return (NULL);
}
// int main()
// {
//     char s[]="yassir";
//     int c = 's';
//     char *r;

//     r = ft_memchr(s,c,15);

//     printf("%s",r);
// }

/* int main()
{
    char *f="hexllo pxuta xm";
    int a=5;
    int c = 120;
    printf("%s\n%s",memchr(f,c,a),ft_memchr(f,c,a));
} */
