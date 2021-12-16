/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yassirsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:37:25 by yel-aziz          #+#    #+#             */
/*   Updated: 2021/11/18 16:18:28 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	countword(char const *s, char c)
{
	int		i;
	int		count;

	count = 0;
	i = 0;
	if (!s)
		return (0);
	while (*s && *s == c)
		s++;
	while (s[i])
	{
		if ((s[i] == c && s[i + 1] != c) || s[i + 1] == '\0')
			count++;
		i++;
	}
	return (count);
}

// int main()
// {
//     char s[] = ".ya.ss.ir.";
//     int r = countword(s,'.');
//     printf("%d",r);
// }
int	lenword(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char const	*skipspace(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return (s);
}

char	**ft_free(char **ar)
{
	free (ar);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**ar;
	int		len;
	int		count;
	int		f;
	int		k;

	count = countword(s, c);
	f = 0;
	ar = (char **)malloc(sizeof(char *) * (count + 1));
	if (!ar || !s)
		return (NULL);
	while (f < count)
	{
		s = skipspace(s, c);
		len = lenword(s, c);
		ar[f] = (char *)malloc(sizeof(char) * (len + 1));
		if (!ar[f])
			return (ft_free(ar));
		k = 0;
		while (k < len)
			ar[f][k++] = *s++;
		ar[f++][k] = '\0';
	}
	ar[f] = NULL;
	return (ar);
}
/*#include<stdio.h>
int main ()
{
    char const s[] = "..yassi.r.r..";
    char ** d = ft_split(s, '.');
    int i=0;
    while (i <3)
    {
       printf("%s\n",d[i]);
       i++;
    }
    printf("%s",s);
    
}*/
