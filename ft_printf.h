#ifndef	FT_PRINTF_H
#define	FT_PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

void	ft_putchar(int c);
int		ft_printf(const char *format, ...);
void	ft_putnbr(int nbr);
void	ft_putstr(char *s);
size_t	ft_strlen(const char *s);

#endif