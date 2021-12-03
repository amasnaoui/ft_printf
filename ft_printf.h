/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasnaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:00:37 by amasnaou          #+#    #+#             */
/*   Updated: 2021/11/24 19:00:39 by amasnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include<stdio.h>
# include<unistd.h>

int		ft_printf(const char *format, ...);
void	ft_print(va_list args, const char *format, int i, int *count);
void	ft_putchar_fd(char c, int fd, int *count);
void	ft_putstr_fd(char *s, int fd, int *count);
void	ft_putnbr_fd(int n, int fd, int *count);
void	ft_print_hexa(unsigned int num, char hex, int *count);
void	ft_print_address(unsigned long adr, int *count);
void	ft_print_hexa_add(unsigned long num, int *count);
void	ft_putunsigned(unsigned int n, int *count);

#endif
