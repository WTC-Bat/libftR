#include "libft.h"

int		main(void)
{
	char	*str1 = "CHEESE";		//ESEEHC
	char	*str2 = "crackers";		//srekcarc
	// char	*str3 = "";				//NULL
	char	*rstr1 = ft_strrev(str1);
	char	*rstr2 = ft_strrev(str2);
	// char	*rstr3 = ft_strrev(str3);

	ft_putendl("str1: CHEESE");
	ft_putstr("rstr1: ");
	ft_putendl(rstr1);
	ft_putendl("str2: crackers");
	ft_putstr("rstr2: ");
	ft_putendl(rstr2);

	return (0);
}
