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

static void	test_ft_isprint(void)
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

	ch1 = '~';
	ch2 = 'A';
	ch3 = ' ';
	ft1 = ft_isprint(ch1);
	st1 = ft_isprint(ch1);
	ft2 = ft_isprint(ch2);
	st2 = ft_isprint(ch2);
	ft3 = ft_isprint(ch3);
	st3 = ft_isprint(ch3);
	printf("isdigit:\n");
	printf("ft_isdigit (%c): %d\n", ch1, ft1);
	printf("st_isdigit (%c): %d\n", ch1, st1);
	printf("ft_isdigit (%c): %d\n", ch2, ft2);
	printf("st_isdigit (%c): %d\n", ch2, st2);
	printf("ft_isdigit (%c): %d\n", ch3, ft3);
	printf("st_isdigit (%c): %d\n\n", ch3, st3);
}

static void	test_ft_itoa(void)
{
	int		i1;
	int		i2;
	int		i3;
	int		i4;
	char	*ft1;
	// char	*st1;
	char	*ft2;
	// char	*st2;
	char	*ft3;
	// char	*st3;
	char	*ft4;
	// char	*st4;

	i1 = 2147483647;
	i2 = -2147483648;
	i3 = 42;
	i4 = -42;
	ft1 = ft_itoa(i1);
	// st1 = itoa(i1);
	ft2 = ft_itoa(i2);
	// st2 = itoa(i2);
	ft3 = ft_itoa(i3);
	// st3 = itoa(i3);
	ft4 = ft_itoa(i4);
	// st4 = itoa(i4);
	printf("itoa:\n");
	printf("ft_itoa: %s\n", ft1);
	// printf("st_itoa: %s\n", st1);
	printf("ft_itoa: %s\n", ft2);
	// printf("st_itoa: %s\n", st2);
	printf("ft_itoa: %s\n", ft3);
	// printf("st_itoa: %s\n", st3);
	printf("ft_itoa: %s\n\n", ft4);
	// printf("st_itoa: %s\n\n", st4);
}

static void	test_ft_memset(void)
{
	char	*ftmem;
	char	*stmem;

	ftmem = malloc(sizeof(char) * 16);
	ft_memset(ftmem, 'I', 16);
	ftmem[strlen(ftmem)] = '\0';
	printf("memset:\n");
	printf("ft_memset ('I', 16): %s\n", ftmem);
	free(ftmem);

	stmem = malloc(sizeof(char) * 16);
	memset(stmem, 'I', 16);
	stmem[strlen(stmem)] = '\0';	//To ensure ftmem and stmem don't overlap?
	printf("st_memset ('I', 16): %s\n\n", stmem);
	free(stmem);
}

static void	test_ft_memcpy(void)
{
	char	*src = "An Area Of Memory";
	void	*ftdst;
	void	*stdst;

	ftdst = malloc(sizeof(char) * 18);
	stdst = malloc(sizeof(char) * 18);
	ftdst = ft_memcpy(ftdst, src, 14);
	stdst = memcpy(stdst, src, 14);
	printf("memcpy: (src - \"An Area Of Memory\")\n");
	printf("ft_memcpy: %s\n", (char *)ftdst);
	printf("st_memcpy: %s\n\n", (char *)stdst);
	free(ftdst);
	ftdst = NULL;
	stdst = NULL;
	free(stdst);
}

static void	test_ft_memccpy(void)
{
	char	*src = "Some Memory To Copy";
	char	*ftdst;
	char	*stdst;

	ftdst = (char *)malloc(sizeof(char) * 32);
	ftdst = (char *)ft_memccpy(ftdst, src, ' ', 19);
	printf("memccpy: (src = \"Some Memory To Copy\")\n");
	printf("ft_memccpy: (%s)\n\n", ftdst);
	// free(ftdst);

	// stdst = (char *)malloc(sizeof(char) * 32);
	// stdst = (char *)memccpy(stdst, src, ' ', 5);
	// printf("st_memccpy: (%s)\n\n", stdst);
	// free(stdst);
}

// static void	test_if_memmove(void)
// {
//
// }

// static void	test_ft_memalloc(void)
// {
// 	char	*str;
// 	char	*tst;
// 	int		cnt;
//
// 	cnt = 0;
// 	tst = "TheFattestOfBats";
// 	str = ft_memalloc(17);
//
// 	while (tst[cnt] != '\0')
// 	{
// 		str[cnt] = tst[cnt];
// 		cnt++;
// 	}
// 	printf("memalloc:\n");
// 	printf("ft_memalloc: %s\n\n", str);
// }

static void	test_ft_strlen(void)
{
	char	*str = "12345";
	int		fti;
	int		sti;

	fti = ft_strlen(str);
	sti = strlen(str);
	printf("strlen (\"12345\"):\n");
	printf("ft_strlen: %d\n", fti);
	printf("st_strlen: %d\n\n", sti);
}

static void	test_ft_strdup(void)
{
	char	*str = "Cheese And Crackers";
	char	*ftstr;
	char	*ststr;

	ftstr = ft_strdup(str);
	ststr = strdup(str);
	printf("strdup: (str = \"Cheese And Crackers\")\n");
	printf("ft_strdup: %s\n", ftstr);
	printf("st_strdup: %s\n\n", ststr);
}

static void	test_ft_strcpy(void)
{
	char	*str = "A String To Copy";
	char	*ftstr;
	char	*ststr;

	ft_strcpy(ftstr, str);
	strcpy(ststr, str);
	printf("strcpy: (str = \"A String To Copy\")\n");
	printf("ft_strcpy: %s\n", ftstr);
	printf("st_strcpy: %s\n\n", ststr);
}

static void	test_ft_strncpy(void)
{
	char	*str = "A String To Copy";
	char	*ftstr;
	char	*ststr;

	ftstr = (char *)malloc(sizeof(char) * 8);
	ststr = (char *)malloc(sizeof(char) * 8);
	ft_strncpy(ftstr, str,  8);
	strncpy(ststr, str, 8);
	printf("strncpy: (str = \"A String To Copy\")\n");
	printf("ft_strncpy: %s\n", ftstr);
	printf("st_strncpy: %s\n\n", ststr);
}

static void	test_ft_strcat(void)
{
	char	*str = "Bat";
	char	*ftstr;
	char	*ststr;

	ftstr = strdup("I Am ");
	ststr = strdup("I Am ");
	ft_strcat(ftstr, str);
	strcat(ststr, str);
	printf("strcat: (\"I Am \" + \"Bat\")\n");
	printf("ft_strcat: %s\n", ftstr);
	printf("st_strcat: %s\n\n", ststr);
}

int			main(int argc, char **argv)
{
	test_ft_atoi();
	test_ft_bzero();
	test_ft_isalnum();
	test_ft_isalpha();
	test_ft_isascii();
	test_ft_isdigit();
	test_ft_isprint();
	test_ft_itoa();
	test_ft_memset();
	test_ft_memcpy();
	test_ft_memccpy();
	// test_ft_memalloc();
	test_ft_strlen();
	test_ft_strdup();
	test_ft_strcpy();
	test_ft_strncpy();
	test_ft_strcat();
	return (0);
}
