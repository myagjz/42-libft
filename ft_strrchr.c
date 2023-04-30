/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:08:05 by myagiz            #+#    #+#             */
/*   Updated: 2022/10/16 17:26:57 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*start;

	start = (char *)s;
	while (*s)
			s++;
	while (s >= start)
	{
		if (*((char *)s) == (char)c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
//sondan başlıyor ve ilk karşılatığı yerden itibaren yazdırıyor...
/*
int	main()
{
	char	a[] = "mustafa";

	printf("%s", ft_strrchr(a, 'a'));
}
*/
