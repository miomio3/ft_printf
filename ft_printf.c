#include "ft_printf.h"

static int	ft_uputnbr(unsigned int u)
{
	int	len;

	len = 0;
	ft_putnbr(u, &len);
	return (len);
}

static int	ft_putadd(void *p)
{
	int	len;
	unsigned long add;

	len = ft_putstr("0x");
	add = (unsigned long)&*p;
	ft_puthem(add, &len);
	return (len);
}

static	int	put_args(char format, va_list *args)
{
	int	len;

	len = 0;
	if(format == 'c')
		len = ft_putchar(va_arg(*args, int));
	else if(format == 'd')
		ft_putnbr(va_arg(*args, int), &len);
	else if(format == 's')
		len = ft_putstr(va_arg(*args, char *));
	else if(format == 'i')
		len = ft_putnbr(va_arg(*args, int), &len);
	else if(format == '%')
		len = ft_putchar('%');
	else if(format == 'u')
		len = ft_uputnbr(va_arg(*args, unsigned int));
	else if(format == 'p')
		len = ft_putadd(va_arg(*args, void*));
	else if(format == 'x')
		len = ft_puthem(va_arg(*args, unsigned long), &len);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, format);
	while (*format)
	{
		if(*format == '%')
		{
			format++;
			len = len + put_args(*format, &args);
		}
		else
		{
			len++;
			ft_putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (len);
}