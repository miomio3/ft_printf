#include "ft_printf.h"

int main(void)
{
	char p;
	//ft_printf("%p\n", &p);
	//printf("%p\n", &p);
	ft_printf("%d\n", 199999);
	printf("%d\n", 199999);
	ft_printf("%d\n", 2147483647);
	printf("%d\n", 2147483647);
	return (0);
}