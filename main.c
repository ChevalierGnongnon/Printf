/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:42:43 by chhoflac          #+#    #+#             */
/*   Updated: 2023/12/11 14:09:26 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include "ft_printf.c"
#include <limits.h>

int	main(void)
{
	int i, j;
	
	i = ft_printf("%c %s %d %i %d %u %d %x %X Bonjour, +=_- , !#@$^&*()<>?/[]{};:\t", 'c', "abc", 13, -16, 0, 145, 016, 123, 123);
	ft_printf("\tprinted : %d\n", i); 
	
	j = printf("%c %s %d %i %d %u %d %x %X Bonjour, +=_- , !#@$^&*()<>?/[]{};:\t", 'c', "abc", 13, -16, 0, 145, 016, 123, 123);
	printf("\tprinted : %d\n", j);
}
