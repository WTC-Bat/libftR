#include "libft.h"

int		main(void)
{
	char	*str1;
	char	*str2;

	str1 = ft_memalloc(10);
	str2 = ft_memalloc(10);
	ft_strcpy(str1, "AB");
	ft_strcpy(str2, "CDEFGHI");
	ft_strncat(str1, str2, 10);
	ft_putstr(str1);
	ft_putendl("|");
	return (0);
}
