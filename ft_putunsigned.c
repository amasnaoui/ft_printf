/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:19:50 by amasnaou          #+#    #+#             */
/*   Updated: 2021/12/02 15:19:52 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putunsigned(unsigned int n, int *count)
{
	char	nb_car;

	if (n < 10)
	{
		nb_car = n + 48;
		*count += write (1, &nb_car, 1);
	}
	else
	{
		ft_putnbr_fd(n / 10, 1, count);
		ft_putnbr_fd(n % 10, 1, count);
	}
}

