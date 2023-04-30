/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:07:04 by myagiz            #+#    #+#             */
/*   Updated: 2022/10/17 15:45:16 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *x, int y, size_t n)
{
	while (n--)
		*((unsigned char *)(x + n)) = (unsigned char)y;
	return (x);
}
/*
int main(void)
{
	char dizi[] = "myagiz";
	printf("%s", ft_memset(dizi, 'x', 1));
	return (0);
}
*/
// istediğimiz kadar istediğimiz şeyi doldurur...
