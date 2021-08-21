#include "libft.h"

int	ft_puthem(unsigned long args, int *len)
{
	*len = *len + 1;
	if ((args /16) > 0)
		ft_puthem(args / 16, len);
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
	return (*len);
}
