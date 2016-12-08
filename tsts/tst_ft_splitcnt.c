#include "libft.h"

int		main(void)
{
	char	*str1 = "I am Bat";						//3
	char	*str2 = "There are but few truths";		//5
	// char	*str3 = "";								//0
	char	*str4 = "A B C D E F G H I J K L";		//12
	int		scnt1 = ft_splitcnt(str1, ' ');
	int		scnt2 = ft_splitcnt(str2, ' ');
	// int		scnt3 = ft_splitcnt(str3);
	int		scnt4 = ft_splitcnt(str4, ' ');

	ft_putstr("scnt1: ");
	ft_putnbr_endl(scnt1);
	ft_putstr("scnt2: ");
	ft_putnbr_endl(scnt2);
	// ft_putstr("scnt3: ");
	// ft_putnbr_endl(scnt3);
	ft_putstr("scnt4: ");
	ft_putnbr_endl(scnt4);

	return (0);
}
