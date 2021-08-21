#include "ft_printf.h"

int main(void)
{
	printf("%d\n", ft_printf("%u\n", -1));
	printf("%d\n", printf("%u\n", -1));
	printf("%d\n", ft_printf("%u\n", LONG_MAX));
	printf("%d\n", printf("%ld\n", LONG_MAX));
	printf("%d\n", ft_printf("%u\n", LONG_MIN));
	printf("%d\n", printf("%ld\n", LONG_MIN));
	return (0);
}