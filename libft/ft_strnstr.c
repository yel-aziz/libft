/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:35:12 by yel-aziz          #+#    #+#             */
/*   Updated: 2021/11/19 20:23:52 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	size_t			j;
	char			*s;
	char			*r;

	i = 0;
	s = (char *)haystack;
	r = (char *)needle;
	if (!*needle)
		return (s);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (i + j < len && s [i + j] == r[j]
			&& s[i + j] && r[j])
		{
			if (r[j + 1] == '\0')
				return (&s[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/* int	main()
     {
         char s[]="yassir";
         char d[]="h";
         int n = 6;

         char *r;

         r = ft_strnstr(sd,n); 

         printf("%s",r);
         return 0;
     }*/
