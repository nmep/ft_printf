/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarfi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:07:31 by lgarfi            #+#    #+#             */
/*   Updated: 2023/11/16 16:25:31 by lgarfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	*ft_putchar(int c, int *len)
{
	(*len) += write (1, &c, 1);
	return (len);
}

int	*ft_format(va_list args, const char format, int *len)
{
	if (format == 'c')
		ft_putchar(va_arg(args, int), len);
	else if (format == 's')
		*(len) += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		ft_puthex_addr((va_arg(args, void *)), len);
	else if (format == 'd' || format == 'i')
		ft_putnbr((long long int)va_arg(args, int), len);
	else if (format == 'u')
		ft_unsigned((long long int)va_arg(args, unsigned int), len);
	else if (format == 'x' || format == 'X')
		ft_puthex((long long int)va_arg(args, unsigned int), format, len);
	else if (format == '%')
		*(len) += write(1, "%", 1);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;

	va_start(args, str);
	len = 0;
	while (*str)
	{
		if (*str == '%')
		{
			ft_format(args, *(str + 1), &len);
			str++;
		}
		else
			len += write (1, str, 1);
		str++;
	}
	len += write(1, str, ft_strlen((char *)str));
	va_end(args);
	return (len);
}

// int	main()
// {
// 	// char *a = NULL;

// 	printf("return v == %d\n",ft_printf("%%", 'a'));
// 	// printf("%d\n",printf("%p", a));
// }
