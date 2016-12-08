#include "libft.h"

int		main(void)
{
	char	*str1 = "I am Bat";										//3
	char	*str2 = "There are but few truths";						//5
	// char	*str3 = "";												//0
	char	*str4 = "A B C D E F G H I J K L";						//12
	char	*str5 = "\t\t\v\r\f  \nI   \f am    \t\n\n\r Bat\t";	//3
	int		scnt1 = ft_wordcnt(str1);
	int		scnt2 = ft_wordcnt(str2);
	// int		scnt3 = ft_splitcnt(str3);
	int		scnt4 = ft_wordcnt(str4);
	int		scnt5 = ft_wordcnt(str5);

	ft_putstr("scnt1: ");
	ft_putnbr_endl(scnt1);
	ft_putstr("scnt2: ");
	ft_putnbr_endl(scnt2);
	// ft_putstr("scnt3: ");
	// ft_putnbr_endl(scnt3);
	ft_putstr("scnt4: ");
	ft_putnbr_endl(scnt4);
	ft_putstr("scnt5: ");
	ft_putnbr_endl(scnt5);

	return (0);
}
