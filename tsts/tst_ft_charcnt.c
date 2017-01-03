#include "libft.h"

int		main(void)
{
	char	*str1 = "AAAAA";	// 5 A's
	char	*str2 = "ABBACAB";	// 3 A's
	char	*str3 = "\"There are but \'few\' truths\"";	// 2 Double Quotes
	int		i1 = ft_charcnt(str1, 'A');
	int		i2 = ft_charcnt(str2, 'A');
	int		i3 = ft_charcnt(str3, '\"');

	ft_putendl("AAAAA: (5 x A)");
	ft_putnbr_endl(i1);
	ft_putendl("ABBACAB: (3 x A)");
	ft_putnbr_endl(i2);
	ft_putendl("\"There are but \'few\' truths\": (2 x \")");
	ft_putnbr_endl(i3);

	return (0);
}
