#include "libft.h"

void	ft_putnbr(long nbr)
{
	int	sign;

	sign = 1;
	if(nbr < 0)
	{
		ft_putchar('-');
		sign = -1;
	}
	if((nbr / 10) * sign > 0)
		ft_putnbr((nbr / 10) * sign);
	ft_putchar('0' + (nbr % 10) * sign);
}
