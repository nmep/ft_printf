/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarfi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:06:03 by lgarfi            #+#    #+#             */
/*   Updated: 2023/11/14 14:32:33 by lgarfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>

// Fonctions

void	ft_putnbr(int nb, int *len);
size_t	ft_strlen(char *str);
int		*ft_puthex(unsigned int nb, char format, int *len);
int		*ft_puthex_addr(void *nb, int *len);
int		*ft_unsigned(unsigned int nb, int *len);
size_t	ft_strlen(char *str);
int		ft_putstr(char *str);
int		*ft_format(va_list args, const char format, int *len);
int		ft_printf(const char *str, ...);
int		*ft_putchar(int c, int *len);

#endif
