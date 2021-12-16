/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 21:40:02 by yel-aziz          #+#    #+#             */
/*   Updated: 2021/11/20 21:24:34 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	size_t					p;
	size_t					j;
	unsigned char			*ss1;
	unsigned char			*ss2;

	i = 0;
	p = 0;
	j = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	if (!n)
		return (0);
	while (ss1 && ss2 && ss1[i] == ss2[j] && i < n - 1)
	{
		i++;
		j++;
	}
	return (ss1[i] - ss2[j]);
}
/*int main () {
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   ret = memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
 }*/

/*  int main()
 {
    char s1[10]= "yassir";
    char s2[10]="YASSIR";
    int n = 3;

    int r;

    r = ft_memcmp(s2,s1,n);

    printf("%d",r);
 } */
