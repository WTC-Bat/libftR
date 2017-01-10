#include "libft.h"

static void		cmds_free(t_list *cmds)
{
	t_list	*tmp;

	while (cmds != NULL)
	{
		tmp = cmds;
		cmds = cmds->next;
		ft_memdel(&(tmp)->content);
		free(tmp);
	}
	free(cmds);
}

int		main(void)
{
	char	*tst1 = ft_strdup("TEST_CONTENT");
	t_list	*list1 = ft_lstnew((void *)tst1, ft_strlen(tst1));
	ft_strdel(&tst1);
	ft_putendl((char *)list1->content);
	cmds_free(list1);

	return (0);
}
