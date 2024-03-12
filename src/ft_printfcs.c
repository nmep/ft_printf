/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfcs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarfi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:50:16 by lgarfi            #+#    #+#             */
/*   Updated: 2023/11/12 17:55:19 by lgarfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

size_t	ft_strlen(char *str)
{
	char	*s;

	s = str;
	while (*s)
		s++;
	return (s - str);
}

int	ft_putstr(char *str)
{
	if (!str)
		return (ft_putstr("(null)"));
	return (write(1, str, ft_strlen(str)));
}
