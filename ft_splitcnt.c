/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitcnt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvanwyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 14:25:09 by mvanwyk           #+#    #+#             */
/*   Updated: 2016/08/09 14:25:10 by mvanwyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_splitcnt(char const *s, char c)
{
	int		cnt;
	int		wcnt;

	cnt = 0;
	wcnt = 0;
	while (s[cnt] != '\0')
	{
		if (s[cnt] == c && s[cnt - 1] != c && cnt > 0)
			wcnt++;
		cnt++;
	}
	return (wcnt + 1);
}

// #include "libft.h"

// int		ft_splitcnt(char *str, char c)
// {
// 	int		cnt;
// 	int		wcnt;
//
// 	cnt = 0;
// 	wcnt = 0;
// 	while (str[cnt] != '\0')
// 	{
// 		if (str[cnt] != c && (str[cnt + 1] == c || str[cnt + 1] == '\0'))
// 			wcnt++;
// 		cnt++;
// 	}
// 	return (wcnt);
// }

/*BETTER?*/

// static int	word_count(char const *s, char c)
// {
// 	int		cnt;
// 	int		wcnt;
//
// 	cnt = 0;
// 	wcnt = 0;
// 	while (s[cnt] != '\0')
// 	{
// 		if (s[cnt] == c && s[cnt - 1] != c && cnt > 0)
// 			wcnt++;
// 		cnt++;
// 	}
// 	return (wcnt);
// }
