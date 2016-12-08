#include "libft.h"

int		main(void)
{
	char	*str1 = "ABCDE";
	char	*str2 = "aabbccddee";
	int		str1_idx_A = ft_indexof(str1, 'A');		//0
	int		str1_idx_C = ft_indexof(str1, 'C');		//2
	int		str1_idx_E = ft_indexof(str1, 'E');		//4
	int		str2_idx_a = ft_indexof(str2, 'a');		//0
	int		str2_idx_c = ft_indexof(str2, 'c');		//4
	int		str2_idx_e = ft_indexof(str2, 'e');		//8

	ft_putstr("str1_idx_A: ");
	ft_putnbr(str1_idx_A);
	ft_putchar('\n');
	ft_putstr("str1_idx_C: ");
	ft_putnbr(str1_idx_C);
	ft_putchar('\n');
	ft_putstr("str1_idx_E: ");
	ft_putnbr(str1_idx_E);
	ft_putchar('\n');
	ft_putstr("str2_idx_a: ");
	ft_putnbr(str2_idx_a);
	ft_putchar('\n');
	ft_putstr("str2_idx_c: ");
	ft_putnbr(str2_idx_c);
	ft_putchar('\n');
	ft_putstr("str2_idx_e: ");
	ft_putnbr(str2_idx_e);
	ft_putchar('\n');

	return (0);
}
