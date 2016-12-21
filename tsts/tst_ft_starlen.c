#include "libft.h"

int		main(void)
{
	char	**star;
	int		starlen;

	star = (char **)malloc(sizeof(*star) * 5);
	star[0] = ft_strdup("Cheese");
	star[1] = ft_strdup("Crackers");
	star[2] = ft_strdup("Toast");
	star[3] = NULL;
	// star[3] = "Biscuits";
	// star[4] = NULL;
	starlen = ft_starlen(star);
	ft_putstr("starlen: ");
	ft_putnbr_endl(starlen);
	ft_putendl("FREEING");
	ft_starfree(star);
	ft_putendl("FREE");
	return (0);
}
