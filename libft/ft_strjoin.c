/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:41:20 by yel-aziz          #+#    #+#             */
/*   Updated: 2021/11/19 19:45:08 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*canca;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	canca = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	if (!canca)
		return (NULL);
	while (s1[i])
	{
		canca[j++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		canca[j] = s2[i];
		i++;
		j++;
	}
	canca[j] = '\0';
	return (canca);
}
// int main()
// {
//     char a[]="yassir";

//     char b[]="zamal";

//     char *r;

//     r = ft_strjoin(a,b);

//     printf("%s",r);
// }
