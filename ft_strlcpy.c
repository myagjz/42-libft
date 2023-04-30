/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:04:13 by myagiz            #+#    #+#             */
/*   Updated: 2022/10/18 12:47:43 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	if (size > 0)
	{
		while (index < (size - 1) && src[index])
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	while (src[index])
		index++;
	return (index);
}
//src yi deste baytı kadar kopyalayıp uzunluğunu istenilen kadar yazdırıyoruz//
/*
int	main ()
{
	char a[] ="mustafa";
	char b[] = "yagiz";
	printf("%lu\n%s", ft_strlcpy(a, b, 6), a);
}
*/
