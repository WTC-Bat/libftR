#include "libft.h"

int		main(void)
{
	char	c1 = ' ';
	char	c2 = '\n';
	char	c3 = '\t';
	char	c4 = '\r';
	char	c5 = '\f';
	char	c6 = '\v';
	char	c7 = '\0';
	char	c8 = 'A';
	int		ic1 = ft_iswhitespace(c1);
	int		ic2 = ft_iswhitespace(c2);
	int		ic3 = ft_iswhitespace(c3);
	int		ic4 = ft_iswhitespace(c4);
	int		ic5 = ft_iswhitespace(c5);
	int		ic6 = ft_iswhitespace(c6);
	int		ic7 = ft_iswhitespace(c7);
	int		ic8 = ft_iswhitespace(c8);

	ft_putstr("C1: ");
	ft_putnbr_endl(ic1);
	ft_putstr("C2: ");
	ft_putnbr_endl(ic2);
	ft_putstr("C3: ");
	ft_putnbr_endl(ic3);
	ft_putstr("C4: ");
	ft_putnbr_endl(ic4);
	ft_putstr("C5: ");
	ft_putnbr_endl(ic5);
	ft_putstr("C6: ");
	ft_putnbr_endl(ic6);
	ft_putstr("C7: ");
	ft_putnbr_endl(ic7);
	ft_putstr("C8: ");
	ft_putnbr_endl(ic8);

	return (0);
}
