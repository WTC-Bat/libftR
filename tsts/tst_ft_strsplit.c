#include "libft.h"

int		main(void)
{
	char	*str1 = "There\nare\nbut\nfew\ntruths";
	// char	*str2 = "There\nare\nbut\nfew\ntruths\n";	//ERROR?
	char	*str3 = "There are but few truths";
	char	**star1 = ft_strsplit(str1, '\n');
	// char	**star2 = ft_strsplit(str2);
	char	**star3 = ft_strsplit(str3, ' ');
	int	i1 = 0;

	ft_putstr("STAR1: ");
	while (star1[i1] != NULL)
	{
		ft_putendl(star1[i1]);
		i1++;
	}
	ft_putendl("END");
	// int	i2 = 0;
	// while (star2[i2] != NULL)
	// 	ft_putendl(star2[i2])

	return (0);
}
