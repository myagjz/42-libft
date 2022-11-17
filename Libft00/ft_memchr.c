/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:06:49 by myagiz            #+#    #+#             */
/*   Updated: 2022/10/17 12:13:55 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
	}
	return (0);
}
/*
int	main()
{
	const char *str = "mustafa";

	printf("%s", ft_memchr(str, 't', 7));
}
*/
// verdiğmiz kelimemnin içindeki harfi bulur o ve ondan sonrasını yazar//
