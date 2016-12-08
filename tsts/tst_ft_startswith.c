#include "libft.h"

int		main(void)
{
	char	*superman = "superman";
	char	*dsuperman = "dsuperman";
	int		superman_start_super = ft_startswith(superman, "super");	//1
	int		dsuperman_start_super = ft_startswith(dsuperman, "super");	//0

	ft_putstr("superman_start_super: ");
	ft_putnbr(superman_start_super);
	ft_putchar('\n');
	ft_putstr("dsuperman_start_super: ");
	ft_putnbr(dsuperman_start_super);
	ft_putchar('\n');

	return (0);
}
