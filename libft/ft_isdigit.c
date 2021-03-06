/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:32:03 by yel-aziz          #+#    #+#             */
/*   Updated: 2021/11/19 15:01:41 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/* 	int main()
	{
		int o , p;

		o = ft_isdigit(48);

		p = isdigit(48);

		ft_putchar( o + 48 );
		ft_putchar( p + 48 );
	} */
