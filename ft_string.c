/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:03:30 by chhoflac          #+#    #+#             */
/*   Updated: 2023/12/12 10:35:50 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_strlen.c"
#include "ft_putstr_fd.c"

int	ft_string(char *s)
{
	int	i;

	i = ft_strlen(s);
	ft_putstr_fd(s, 1);
	return (i);
}
