/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallorca <sallorca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:21:40 by sallorca          #+#    #+#             */
/*   Updated: 2022/09/30 16:49:47 by sallorca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n && *(str1 + i) == *(str2 + i))
		i++;
	if (i == n)
		return (0);
	return (*(str1 + i) - *(str2 + i));
}

/*int main () 
{
   char str1[15] = "abcdef";
   char str2[15] = "ABCDEF";
   int ret;

   ret = memcmp(str1, str2, 5);

	if(ret > 0) 
      printf("str2 is less than str1\n");
	else if(ret < 0)
		printf("str1 is less than str2\n");
  	else
      printf("str1 is equal to str2\n");
   return(0);
}*/