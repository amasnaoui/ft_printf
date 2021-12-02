/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:23:29 by amasnaou          #+#    #+#             */
/*   Updated: 2021/12/02 12:23:31 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_print_hexa_add(unsigned long num, int *count)
{
	char	*c;

	c = "0123456789abcdef";
	if (num < 16)
	{
		*count += write (1, &c[num], 1);
	}
	else
	{
		ft_print_hexa_add(num / 16, count);
		ft_print_hexa_add(num % 16, count);
	}
}
void	ft_print_address(unsigned long adr,int *count)
{
	*count += write (1, "0x", 2);
	ft_print_hexa_add(adr,count);
}
