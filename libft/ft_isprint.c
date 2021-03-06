/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:25:07 by yel-aziz          #+#    #+#             */
/*   Updated: 2021/11/17 19:53:38 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}
/* int main()
{
	int o , p ;

	o = ft_isprint();

	p = isprint();

	ft_putchar(o + 48);

	ft_putchar( p + 48);
} */
