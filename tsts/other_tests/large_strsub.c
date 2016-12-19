#include "libft.h"

static int	get_len(char *desert, int *pos)
{
	int	cnt;
	int	idx;

	cnt = 0;
	idx = *pos;
	while (desert[idx] != '\n' && desert[idx] != '\0')
	{
		cnt++;
		idx++;
	}
	*pos = idx;
	return (cnt);
}

int			main(void)
{
	char	*desert;
	char	*sub;
	int		pos;

	pos = 0;
	desert = "The desert was the apotheosis of all deserts, huge, standing to "
	"the sky for\n what looked like eternity in all directions. It was white and "
	"blinding and\n waterless and without feature save for the faint, cloudy "
	"haze of the\n mountains which sketched themselves on the horizon and the "
	"devil-grass\n which brought sweet dreams, nightmares, death. An occasional "
	"tombstone sign\n pointed the way, for once the drifted track that cut its "
	"way through the\n thick crust of alkali had been a highway. Coaches and "
	"buckas had followed\n it. The world had moved on since then. The world had "
	"emptied.";

	sub = ft_strsub(desert, pos, get_len(desert, &pos));
	ft_putendl(sub);
	return (0);
}
