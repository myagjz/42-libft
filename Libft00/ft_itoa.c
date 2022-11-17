/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:05:57 by myagiz            #+#    #+#             */
/*   Updated: 2022/10/23 18:10:25 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*to_str(char *s, int step, int n, int count)
{
	int	number;

	if (n < 0)
		count = 1;
	s[step] = '\0';
	while (step > 0)
	{
		step--;
		number = n % 10;
		n /= 10;
		s[step] = number + '0';
		if (count == 1)
			s[0] = '-';
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		step;
	int		count;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	count = n;
	step = 0;
	if (!n)
		step = 1;
	while (count != 0)
	{
		step++;
		count /= 10;
	}
	if (n < 0)
	{
		step++;
		count = 1;
		n *= -1;
	}
	s = (char *)malloc(sizeof(char) * step + 1);
	if (!s)
		return (NULL);
	return (to_str(s, step, n, count));
}
/*
int main()
{
	printf("%s",ft_itoa(51));
	return 0;
}
*/
