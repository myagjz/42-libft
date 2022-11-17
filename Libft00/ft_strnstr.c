/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:08:01 by myagiz            #+#    #+#             */
/*   Updated: 2022/10/18 12:58:56 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	j = ft_strlen(needle);
	if (j == 0)
		return ((char *) haystack);
	if (len == 0)
		return ((char *) NULL);
	i = 0;
	while (i <= (len - j) && haystack[i] != '\0')
	{
		if (ft_strncmp(&haystack[i], needle, j) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return ((char *) NULL);
}
/*
int	main(void)
{
	char	*a;
	char	*b;

	a = "42 mustafa yagiz";
	b = "mu";
	printf("%s", ft_strnstr(a, b, 5));
}
*/
