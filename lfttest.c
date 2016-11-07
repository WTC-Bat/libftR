#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
	printf("ft_atoi: %d\nst_atoi: %d\n", ftres, stres);
	ftres = ft_atoi(min);
	stres = atoi(min);
	printf("ft_atoi: %d\nst_atoi: %d\n", ftres, stres);
	ftres = ft_atoi(neg);
	stres = atoi(neg);
	printf("ft_atoi: %d\nst_atoi: %d\n", ftres, stres);
	ftres = ft_atoi(pos);
	stres = atoi(pos);
	printf("ft_atoi: %d\nst_atoi: %d\n\n", ftres, stres);
}

static void	test_ft_bzero(void)
{
	char	*ftstr;
	char	*ststr;

	ftstr = strdup("ZeroMyBytes");
	ststr = strdup("ZeroMyBytes");
	printf("bzero:\n");
	printf("ftstr: %s\n", ftstr);
	printf("ststr: %s\n", ststr);
	ft_bzero((void *)ftstr, 4);
	bzero((void *)ststr, 4);
	printf("ft_bzero: %s\n", ftstr);
	printf("st_bzero: %s\n\n", ststr);
}

static void	test_ft_isalnum(void)
{
	char	ch1;
	char	ch2;
	char	ch3;
	int		fttst1;
	int		sttst1;
	int		fttst2;
	int		sttst2;
	int		fttst3;
	int		sttst3;

	ch1 = 'Z';
	ch2 = '5';
	ch3 = '|';
	fttst1 = ft_isalnum(ch1);
	sttst1 = isalnum(ch1);
	fttst2 = ft_isalnum(ch2);
	sttst2 = isalnum(ch2);
	fttst3 = ft_isalnum(ch3);
	sttst3 = isalnum(ch3);
	printf("isalnum:\n");
	printf("ft_isalnum (%c): %d\n", ch1, fttst1);
	printf("st_isalnum (%c): %d\n", ch1, sttst1);
	printf("ft_isalnum (%c): %d\n", ch2, fttst2);
	printf("st_isalnum (%c): %d\n", ch2, sttst2);
	printf("ft_isalnum (%c): %d\n", ch3, fttst3);
	printf("st_isalnum (%c): %d\n\n", ch3, sttst3);
}

static void	test_ft_isalpha(void)
{
	char	ch1;
	char	ch2;
	char	ch3;
	char	ch4;
	int		fttst1;
	int		sttst1;
	int		fttst2;
	int		sttst2;
	int		fttst3;
	int		sttst3;
	int		fttst4;
	int		sttst4;

	ch1 = 'z';
	ch2 = 'Z';
	ch3 = '1';
	ch4 = '|';
	fttst1 = ft_isalpha(ch1);
	sttst1 = isalpha(ch1);
	fttst2 = ft_isalpha(ch2);
	sttst2 = isalpha(ch2);
	fttst3 = ft_isalpha(ch3);
	sttst3 = isalpha(ch3);
	fttst4 = ft_isalpha(ch4);
	sttst4 = isalpha(ch4);
	printf("isalpha:\n");
	printf("ft_isalpha (%c): %d\n", ch1, fttst1);
	printf("st_isalpha (%c): %d\n", ch1, sttst1);
	printf("ft_isalpha (%c): %d\n", ch2, fttst2);
	printf("st_isalpha (%c): %d\n", ch2, sttst2);
	printf("ft_isalpha (%c): %d\n", ch3, fttst3);
	printf("st_isalpha (%c): %d\n", ch3, sttst3);
	printf("ft_isalpha (%c): %d\n", ch4, fttst4);
	printf("st_isalpha (%c): %d\n\n", ch4, sttst4);
}

static void	test_ft_isascii(void)
{
	char	ch1;
	char	ch2;
	char	ch3;
	int		ft1;
	int		st1;
	int		ft2;
	int		st2;
	int		ft3;
	int		st3;
	int		ft4;
	int		st4;

	ch1 = 'A';
	ch2 = '5';
	ch3 = '|';
	ft1 = ft_isascii(ch1);
	st1 = isascii(ch1);
	ft2 = ft_isascii(ch2);
	st2 = isascii(ch2);
	ft3 = ft_isascii(ch3);
	st3 = isascii(ch3);
	printf("isascii:\n");
	printf("ft_isascii (%c): %d\n", ch1, ft1);
	printf("st_isascii (%c): %d\n", ch1, st1);
	printf("ft_isascii (%c): %d\n", ch2, ft2);
	printf("st_isascii (%c): %d\n", ch2, st2);
	printf("ft_isascii (%c): %d\n", ch3, ft3);
	printf("st_isascii (%c): %d\n\n", ch3, st3);
}

static void	test_ft_isdigit(void)
{
	char	ch1;
	char	ch2;
	int		ft1;
	int		st1;
	int		ft2;
	int		st2;

	ch1 = '5';
	ch2 = 'Z';
	ft1 = ft_isdigit(ch1);
	st1 = isdigit(ch1);
	ft2 = ft_isdigit(ch2);
	st2 = isdigit(ch2);
	printf("isdigit:\n");
	printf("ft_isdigit (%c): %d\n", ch1, ft1);
	printf("st_isdigit (%c): %d\n", ch1, st1);
	printf("ft_isdigit (%c): %d\n", ch2, ft2);
	printf("st_isdigit (%c): %d\n\n", ch2, st2);
}

int			main(int argc, char **argv)
{
	test_ft_atoi();
	test_ft_bzero();
	test_ft_isalnum();
	test_ft_isalpha();
	test_ft_isascii();
	test_ft_isdigit();
	return (0);
}
