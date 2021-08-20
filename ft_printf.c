#include "ft_printf.h"

static	void	put_args(char format, va_list *args)
{
	if(format == 'c')
		ft_putchar(va_arg(*args, int));
	else if(format == 'd')
		ft_putnbr(va_arg(*args, int));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
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