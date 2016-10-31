/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvanwyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 15:04:31 by mvanwyk           #+#    #+#             */
/*   Updated: 2016/05/15 15:04:34 by mvanwyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Lexicographically compares two strings for length of 'n'.
**	Returns 1 if the first 'n' characters of both 's1' and
**	's2' are identical, returns 0 if they are not.
*/

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	cnt;

	cnt = 0;
	while (cnt <= n)
	{
		if (s1[cnt] != s2[cnt])
			return (0);
		cnt++;
	}
	return (1);
}
