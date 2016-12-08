#include "libft.h"

int		main(void)
{
	char	*superman = "superman";
	char	*dsuperman = "dsuperman";
	int		superman_end_rman = ft_endswith(superman, "rman");	//1
	int		superman_end_rma = ft_endswith(superman, "rma");		//0

	ft_putstr("superman_end_rman: ");
	ft_putnbr(superman_end_rman);
	ft_putchar('\n');
	ft_putstr("superman_end_rma: ");
	ft_putnbr(superman_end_rma);
	ft_putchar('\n');

	return (0);
}
