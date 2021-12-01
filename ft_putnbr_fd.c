/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 22:20:16 by amasnaou          #+#    #+#             */
/*   Updated: 2021/11/12 22:20:17 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr_fd(int n, int fd, int *count)
{
	char	nb_car;

	if (n == -2147483648)
		*count += write (fd, "-2147483648", 11);
	else if (n == 2147483647)
		*count += write (fd, "2147483647", 10);
	else if (n < 0)
	{
		*count += write (fd, "-", 1);
		ft_putnbr_fd(-n, fd, count);
	}
	else if (n < 10)
	{
		nb_car = n + 48;
		*count += write (fd, &nb_car, 1);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd, count);
		ft_putnbr_fd(n % 10, fd, count);
	}
}
