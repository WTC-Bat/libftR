#include "libft.h"
#include <stdio.h>
#include <string.h>

int		main(void)
{
	uint8_t	*s1 = (uint8_t *)"\xff\xaa\xde\xffMACOSX\xff";
	uint8_t	*s2 = (uint8_t *)"\xff\xaa\xde\x02";
	size_t	size = 8;
	int		r1 = memcmp(s1, s2, size);
	int		r2 = ft_memcmp(s1, s2, size);
	printf("st_memcmp: %d", r1);
	printf("ft_memcmp: %d", r2);
	return (0);


	// char	src[] = "test basic du memccpy !";
	// char	buff[22];
	// char	buff2[22];
	// char	*res;
	// char	*res2;
	//
	// res = ft_memccpy(buff, src, 'm', 22);
	// res2 = memccpy(buff, src, 'm', 22);
	// printf("ft_memccpy: %s", res);
	// printf("st_memccpy: %s", res2);
	// return (0);
}
