/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarfi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:44:21 by lgarfi            #+#    #+#             */
/*   Updated: 2023/11/14 14:31:40 by lgarfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	*ft_puthex(unsigned int nb, char format, int *len)
{
	if (nb >= 16)
		ft_puthex(nb / 16, format, len);
	if (format == 'x')
		*(len) += write(1, &"0123456789abcdef"[nb % 16], 1);
	else if (format == 'X')
		*(len) += write(1, &"0123456789ABCDEF"[nb % 16], 1);
	return (len);
}
//
