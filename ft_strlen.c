/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:10:14 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/04 12:23:56 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	printf("%lu\n", strlen("one"));
// 	printf("%lu\n", ft_strlen("one"));
// 	printf("%lu\n", strlen(NULL));
// 	printf("%lu\n", ft_strlen(NULL));
// }