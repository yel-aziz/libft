/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:47:36 by yel-aziz          #+#    #+#             */
/*   Updated: 2021/11/19 16:25:34 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*buffer;

	i = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
			start = ft_strlen(s);
	if (len >= ft_strlen(s))
		len = ft_strlen(s);
	buffer = (char *)malloc(sizeof(char) * (len + 1));
	if (!buffer)
		return (NULL);
	while (len)
	{
		buffer[i] = s[start++];
		i++;
		len--;
	}
	buffer[i] = '\0';
	return (buffer);
}
/*int main()
{
char p[]= "yassir";
char *r;

r = ft_substr(p,2,2);
printf("%s",r);
}*/
