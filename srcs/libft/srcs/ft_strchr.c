/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:33:33 by kinamura          #+#    #+#             */
/*   Updated: 2024/06/29 07:04:06 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	index;

	if (!s)
		return (NULL);
	index = 0;
	while (s[index])
	{
		if ((char)s[index] == (char)c)
			return ((char *)&s[index]);
		index++;
	}
	if (c == '\0')
		return ((char *)&s[index]);
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>
// int main(int ac, char **av)
// {
// 	if (ac != 3)
// 		return (0);
// 	char *s = av[1];
// 	char c = av[2][0];

// 	printf("   strchr:%s\n", strchr(s, c));
// 	printf("ft_strchr:%s\n", ft_strchr(s, c));
// }