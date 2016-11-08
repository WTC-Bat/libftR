#include "libft.h"
#include <stdio.h>
#include <string.h>

int		main(void)
{
	// char	*src = "test basic du memccpy !";
	char	src[] = "test basic du memccpy !";
	char	buff[22];
	char	buff2[22];
	char	*res;
	char	*res2;

	res = ft_memccpy(buff, src, 'm', 22);
	res2 = memccpy(buff, src, 'm', 22);
	// res = ft_memccpy("", src, 'm', 0);
	printf("ft_memccpy: %s", res);
	printf("st_memccpy: %s", res2);
	return (0);
}
