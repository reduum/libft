/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:50:08 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/06 10:50:11 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *str);

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (1);
	(void)argv;
	ft_strlen(NULL);
	return (0);
}
