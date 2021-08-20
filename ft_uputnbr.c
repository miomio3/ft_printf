#include "ft_printf.h"


void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_uputnbr(unsigned int nbr)
{
	if(nbr / 10 > 0)
		ft_uputnbr(nbr / 10);
	ft_putchar('0' + (nbr % 10));
}

int main(void)
{
	ft_uputnbr(-1111);
	printf("\n");
	ft_uputnbr(1111);
	printf("\n");
	ft_uputnbr(2147483647);
	printf("\n");
	ft_uputnbr(2147483648);
}