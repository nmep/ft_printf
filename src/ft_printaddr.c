/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printaddr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarfi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 22:48:05 by lgarfi            #+#    #+#             */
/*   Updated: 2023/12/01 16:24:46 by lgarfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	*ft_0x(int *len)
{
	*(len) += write(1, "0x", 2);
	return (len);
}

static int	*ft_puthex_addr2(unsigned long long nb, int *len)
{
	if (nb >= 16)
		ft_puthex_addr2(nb / 16, len);
	*(len) += write(1, &"0123456789abcdef"[nb % 16], 1);
	return (len);
}

int	*ft_puthex_addr(void *nb, int *len)
{
	if (nb == NULL)
	{
		*(len) += write(1, "(nil)", 5);
		return (len);
	}
	ft_0x(len);
	ft_puthex_addr2((unsigned long long)nb, len);
	return (len);
}
/*
int	main()
{
 	size_t p = 4;
 	int	len = 0;
 	ft_puthex_addr(&p, &len);
}*/
