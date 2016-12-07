#include "libft.h"

int		main(void)
{
	char	up;
	char	low;
	char	uplow;
	char	lowup;

	up = 'Z';
	low = 'z';
	uplow = ft_tolower(up);
	lowup = ft_toupper(low);
	ft_putchar(uplow);
	ft_putchar('\n');
	ft_putchar(lowup);
	ft_putchar('\n');
	return (0);
}
