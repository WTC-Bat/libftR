#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	slen(char *str)
{
	int		cnt;

	cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	return (cnt);
}

static void	pstr(char *str)
{
	int		cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		write(1, &str[cnt], 1);
		cnt++;
	}
}

static void test_ft_atoi(void)
{
	char	*max;
	char	*min;
	char	*neg;
	char	*pos;
	int		ftres;
	int		stres;

	max = "2147483647";
	min = "-2147483648";
	neg = "-528";
	pos = "289";
	ftres = 0;
	stres = 0;
	printf("atoi:\n");
	ftres = ft_atoi(max);
	stres = atoi(max);
	printf("std_atoi: %d\nft_atoi : %d\n", ftres, stres);
	ftres = ft_atoi(min);
	stres = atoi(min);
	printf("std_atoi: %d\nft_atoi : %d\n", ftres, stres);
	ftres = ft_atoi(neg);
	stres = atoi(neg);
	printf("std_atoi: %d\nft_atoi : %d\n", ftres, stres);
	ftres = ft_atoi(pos);
	stres = atoi(pos);
	printf("std_atoi: %d\nft_atoi : %d\n\n", ftres, stres);
}

static void	test_ft_bzero(void)
{
	char	*ftstr;
	char	*ststr;

	printf("bzero:\n");
	ftstr = strdup("ZeroMyBytes");
	ststr = strdup("ZeroMyBytes");
	printf("stdstr: %s\n", ftstr);
	printf("ftstr : %s\n", ststr);
	ft_bzero((void *)ftstr, 4);
	bzero((void *)ststr, 4);
	printf("std_bzero: %s\n", ftstr);
	printf("ft_bzero : %s\n\n", ststr);
}
int			main(int argc, char **argv)
{
	test_ft_atoi();
	test_ft_bzero();
	return (0);
}
