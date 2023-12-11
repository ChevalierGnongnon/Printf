/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 10:20:32 by chhoflac          #+#    #+#             */
/*   Updated: 2023/12/11 12:02:15 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_putnbr_fd.c"
 
int	ft_decimal(int n)
{
	ft_putnbr_fd(n, 1);
	if (n == 0)
		return (1);
	if (n < 0)
		return (ft_getsize(n) + 1);
	return (ft_getsize(n));
}
