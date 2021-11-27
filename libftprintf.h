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

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include<stdarg.h>
# include<stdio.h>
# include<stdlib.h>
# include<unistd.h>
# include<string.h>
# include<strings.h>

va_list a_list;
int	ft_printf(const char *, ...);

#endif
