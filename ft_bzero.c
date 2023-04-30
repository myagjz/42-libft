/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:05:43 by myagiz            #+#    #+#             */
/*   Updated: 2022/10/23 14:13:57 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*((unsigned char *)(s + n)) = 0;
}
/*
int main()
{
	char x[] = "yagiz";
	printf("%s", x);
	ft_bzero(x, 5);
	printf("\nnow:%s", x);
}
*/
