#include "libft.h"

int	ft_putnbr(long nbr, int *len)
{
	int	sign;

	*len = *len + 1;
	sign = 1;
	if(nbr < 0)
	{
		ft_putchar('-');
		sign = -1;
		*len = *len + 1;
	}
	if((nbr / 10) * sign > 0)
		ft_putnbr((nbr / 10) * sign, len);
	ft_putchar('0' + (nbr % 10) * sign);
	return (*len);
}
