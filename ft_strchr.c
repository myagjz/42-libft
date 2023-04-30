/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:07:31 by myagiz            #+#    #+#             */
/*   Updated: 2022/10/23 16:54:55 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
			s++;
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
//int i yi chara cevirip istenilen yerden ekrana yazar...
/*
int	main()
{
	char	x[] = "mustafa";

	printf("%s", ft_strchr(x, 'f'));
}
*/
