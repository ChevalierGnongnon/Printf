/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:51:05 by chhoflac          #+#    #+#             */
/*   Updated: 2023/12/12 10:49:06 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_getsize.c"

int	ft_hexa_up(unsigned int n)
{
	unsigned int	rem;
	int				i;

	i = 0;
	rem = n % 16;
	if (n > 16)
	{
		ft_hexa_up(n / 16);
		i++;
	}
	if (rem > 9 && rem <= 16)
		ft_putchar_fd((rem + 55), 1);
	else
		ft_putchar_fd((rem + 48), 1);
	i++;
	return (i);
}

int	ft_hexa_low(unsigned int n)
{
	unsigned int	rem;
	int				i;

	i = 0;
	rem = n % 16;
	if (n > 16)
	{	
		ft_hexa_low(n / 16);
		i++;
	}
	if (rem > 9 && rem <= 16)
		ft_putchar_fd((rem + 87), 1);
	else
		ft_putchar_fd((rem + 48), 1);
	i++;
	return (i);
}
