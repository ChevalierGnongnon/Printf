/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:14:48 by chhoflac          #+#    #+#             */
/*   Updated: 2023/12/09 13:41:44 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
void	ft_putnbr_unsigned(int n)
{

}
int	ft_unsigned(int n)
{
	if (n < 0)
	{
		ft_putnbr_unsigned();
	}
	ft_putnbr_fd(n, 1);
	if (n == 0)
		return (1);
	return (ft_getsize(n));
}
