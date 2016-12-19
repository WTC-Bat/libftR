#include "libft.h"

int		main(void)
{
	char	*j1 = "I ";
	char	*j2 = "am ";
	char	*j3 = "the ";
	char	*j4 = "Bat";
	int		cnt = 0;
	char	*join;

	join = ft_strdup(j1);
	join = ft_strjoin(join, j2);
	join = ft_strjoin(join, j3);
	join = ft_strjoin(join, j4);

	ft_putendl(join);

	return (0);
}
