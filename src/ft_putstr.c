#include "libft.h"

int	ft_putstr(char *s)
{
	int	len;

	len = ft_strlen(s);
	write(1, s, len);
	return (len);
}