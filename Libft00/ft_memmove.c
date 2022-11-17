/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:07:00 by myagiz            #+#    #+#             */
/*   Updated: 2022/10/24 08:39:33 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len--)
			*((unsigned char *)(dst + len)) = *((unsigned char *)(src + len));
	}
	return (dst);
}
/*
int main(void)
{
    char dst[] = "yagiz";
    char src[] = "merhaba";
	printf("%s", ft_memmove(dst, src, 6));
}
*/
/* memmove memcpy ile neredeyse aynıdır fark sondan kontrol ederek
çakışma yapmaz ama memcpy de farklıdır
kopyalanacak yer ile kopyalancak karakter eşit ise desti geri döndürür */
