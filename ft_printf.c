#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while(*s++)
		i++;
	return (i);
}

static void	ft_uputnbr(int u)
{
	if(u < 0)
			return;
	ft_putnbr(u);
}

static	void	put_args(char format, va_list *args)
{
	int	u;

	if(format == 'c')
		ft_putchar(va_arg(*args, int));
	else if(format == 'd')
		ft_putnbr(va_arg(*args, int));
	else if(format == 's')
		ft_putstr(va_arg(*args, char *));
	else if(format == 'i')
		ft_putnbr(va_arg(*args, int));
	else if(format == '%')
		ft_putchar('%');
	else if(format == 'u')
	{
		u = va_arg(*args, int);
		ft_uputnbr(u);
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	args;

	va_start(args, format);
	while (*format)
	{
		if(*format == '%')
		{
			format++;
			put_args(*format, &args);
		}
		else
			ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (1);
}