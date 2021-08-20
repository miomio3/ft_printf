#include "ft_printf.h"

void	ft_puthem(long args)
{
	if ((args /16) > 0)
		ft_puthem(args / 16);
	if (args % 16 < 10)
		ft_putchar('0' + args % 16);
	else if (args % 16 == 10)
		ft_putchar('a');
	else if (args % 16 == 11)
		ft_putchar('b');
	else if (args % 16 == 12)
		ft_putchar('c');
	else if (args % 16 == 13)
		ft_putchar('d');
	else if (args % 16 == 14)
		ft_putchar('e');
	else if (args % 16 == 15)
		ft_putchar('f');
}
