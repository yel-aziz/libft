/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 23:57:34 by yel-aziz          #+#    #+#             */
/*   Updated: 2021/11/18 21:56:45 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
// int main()
// {
// char s[10] = "yassir";
//char *p;
//char o = 's';
//int i;
//i = 0;
//p = ft_strchr(s , o);  
///*while(p[i] != '\0')
//{
//ft_putchar(p[i]);
//i++;
//}*/	
// printf( "%s" ,p);    
// } 
