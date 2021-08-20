#include "ft_printf.h"

static void	ft_uputnbr(int u)
{
	if(u < 0)
			return;
	ft_putnbr(u);
}

static void	ft_putadd(void *p)
{
	long add;

	ft_putstr("0x");
	add = (long)&*p;
	ft_puthem(add);
}

static	void	put_args(char format, va_list *args)
{
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
		ft_uputnbr(va_arg(*args, int));
	else if(format == 'p')
		ft_putadd(va_arg(*args, void*));
	else if(format == 'x')
		ft_puthem(va_arg(*args, long));
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