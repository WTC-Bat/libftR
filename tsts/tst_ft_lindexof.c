#include "libft.h"

int		main(void)
{
	char	*str1 = "ABCDE";
	char	*str2 = "aabbccddee";
	char	*str3 = "AhifnaFLK";
	int		str1_idx_A = ft_lindexof(str1, 'A');		//0
	int		str1_idx_C = ft_lindexof(str1, 'C');		//2
	int		str1_idx_E = ft_lindexof(str1, 'E');		//4
	int		str2_idx_a = ft_lindexof(str2, 'a');		//1
	int		str2_idx_c = ft_lindexof(str2, 'c');		//5
	int		str2_idx_e = ft_lindexof(str2, 'e');		//9
	int		str3_idx_K = ft_lindexof(str3, 'K');		//8

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
	ft_putstr("str3_idx_K: ");
	ft_putnbr(str3_idx_K);
	ft_putchar('\n');

	return (0);
}
