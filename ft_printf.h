#ifndef	FT_PRINTF_H
#define	FT_PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_putnbr(long nbr, int *len);
int	ft_putstr(char *s);
int	ft_strlen(const char *s);
int	ft_puthem(unsigned long args, int *len);

#endif