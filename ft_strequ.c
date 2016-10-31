/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvanwyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 15:03:48 by mvanwyk           #+#    #+#             */
/*   Updated: 2016/05/15 15:03:53 by mvanwyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Lexicographically compares two strings.
**	Returns 1 if strings are identical, returns
**	0 if they are not.
*/

int		ft_strequ(char const *s1, char const *s2)
{
	int		cnt;

	cnt = 0;
	while (s1[cnt] != 0 && s2[cnt] != 0)
	{
		if (s1[cnt] != s2[cnt])
			return (0);
		cnt++;
	}
	return (1);
}
