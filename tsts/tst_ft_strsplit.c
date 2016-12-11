#include "libft.h"

int		main(void)
{
	char	*str1 = "There\nare\nbut\nfew\ntruths";
	// char	*str2 = "There\nare\nbut\nfew\ntruths\n";	//ERROR?
	char	*str3 = "There are but few truths";
	char	*str4 = "ABBACAB\n";
	char	*str5 = "ABBACAB\n\0";
	char	**star1 = ft_strsplit(str1, '\n');
	// char	**star2 = ft_strsplit(str2);
	char	**star3 = ft_strsplit(str3, ' ');
	char	**star4 = ft_strsplit(str4, '\n');
	char	**star5 = ft_strsplit(str5, '\n');
	int	i = 0;

	ft_putstr("STAR1: ");
	while (star1[i] != NULL)
	{
		ft_putendl(star1[i]);
		i++;
	}
	ft_putendl("END");
	// i = 0;
	// ft_putstr("STAR2: ");
	// while (star2[i] != NULL)
	// {
	// 	ft_putendl(star2[i]);
	// 	i++;
	// }
	// ft_putendl("END");
	i = 0;
	ft_putstr("STAR3: ");
	while (star3[i] != NULL)
	{
		ft_putendl(star3[i]);
		i++;
	}
	ft_putendl("END");
	i = 0;
	ft_putstr("STAR4: ");
	while (star4[i] != NULL)
	{
		ft_putendl(star4[i]);
		i++;
	}
	ft_putendl("END");
	i = 0;
	ft_putstr("STAR5: ");
	while (star5[i] != NULL)
	{
		ft_putendl(star5[i]);
		i++;
	}
	ft_putendl("END");

	return (0);
}
