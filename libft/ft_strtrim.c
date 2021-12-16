/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:44:17 by yel-aziz          #+#    #+#             */
/*   Updated: 2021/11/19 19:46:34 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	fromfirst(char const *set, char const *s1)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]) == NULL)
		{
			break ;
		}
		i++;
	}
	return (i);
}

int	fromlast(char const *set, char const *s1)
{
	int	end_s1;

	end_s1 = ft_strlen(s1)-1;
	while (end_s1 >= 0)
	{
		if (ft_strchr(set, s1[end_s1]) == NULL)
			break ;
		end_s1--;
	}
	return (end_s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*ptr;
	size_t	end_s1;
	size_t	index;

	if (!set)
		return (ft_strdup(s1));
	if (!s1)
		return (NULL);
	i = 0;
	index = 0;
	i = fromfirst(set, s1);
	if (i == ft_strlen(s1))
		return (ft_strdup(""));
	end_s1 = fromlast(set, s1);
	ptr = (char *)malloc(end_s1 - i + 2);
	if (!ptr)
		return (NULL);
	while (i <= end_s1)
		ptr[index++] = s1[i++];
	ptr[index] = '\0';
	return (ptr);
}
