/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:34:01 by amasnaou          #+#    #+#             */
/*   Updated: 2021/11/12 18:34:03 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putstr_fd(char *s, int fd, int *count)
{
	int	i;

	i = -1;
	if (!s)
		*count += write (fd, "(null)", 6);
	else
		while (s[++i])
			*count += write (fd, &s[i], 1);
}
