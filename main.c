/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:42:43 by chhoflac          #+#    #+#             */
/*   Updated: 2023/12/11 10:29:21 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include "ft_printf.c"

int	main(void)
{
	int i, j;
	ft_printf("MY PRINTF\n");
	i = ft_printf("%u\n", 0);
	ft_printf("\nprinted : %d\n", i); 

	printf("\nREAL PRINTF :\n");
	j = printf("%u\n", 0);
	printf("\nprinted : %d\n", j);
}
