/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 09:58:57 by yel-aziz          #+#    #+#             */
/*   Updated: 2021/11/18 22:25:29 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strdup(const char *s1)
{
	char	*re;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	re = (char *)malloc((i + 1) * sizeof(char));
	if (!re)
		return (NULL);
	i = -1;
	while (s1[++i])
		re[i] = s1[i];
	re[i] = '\0';
	return (re);
}

//   int main()
// {
//     char s [] = "yassir";
//     char *n;

//     n = ft_strdup("helo");

//     printf("|%s|\n",n);
//  } 
