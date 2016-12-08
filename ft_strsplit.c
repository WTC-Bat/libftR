/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvanwyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 15:16:03 by mvanwyk           #+#    #+#             */
/*   Updated: 2016/05/15 15:30:30 by mvanwyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
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

static char	*get_word(char const *s, int scnt, int start)
{
	size_t	end;

	end = (scnt + 1) - start;
	return (ft_strsub(s, start, end));
}

char		**ft_strsplit(char const *s, char c)
{
	char	**strs;
	size_t	scnt;
	size_t	strcnt;
	size_t	start;

	if (s == NULL)
		return (NULL);
	scnt = 0;
	start = 0;
	strcnt = 0;
	if ((strs = (char **)malloc(sizeof(*strs) * (word_count(s, c) + 1))) == NULL)
		return (NULL);
	while (s[scnt] != '\0')
	{
		if (s[scnt] != c)
		{
			if (s[scnt - 1] == c && scnt > 0)
				start = scnt;
			else if (s[scnt + 1] == c || s[scnt + 1] == '\0')
				strs[strcnt] = get_word(s, scnt, start);
		}
		scnt++;
	}
	strs[strcnt] = NULL;
	return (strs);
}

/*V3*/

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
//
// char		**ft_strsplit(char const *s, char c)
// {
// 	char	**strs;
// 	size_t	scnt;
// 	size_t	strcnt;
// 	size_t	start;
// 	size_t	end;
//
// 	if (s == NULL)
// 		return (NULL);
// 	scnt = 0;
// 	start = 0;
// 	end = 0;
// 	strcnt = 0;
// 	if ((strs = (char **)malloc(sizeof(*strs) * (word_count(s, c) + 1))) == NULL)
// 		return (NULL);
// 	while (s[scnt] != '\0')
// 	{
// 		if (s[scnt] != c)
// 		{
// 			if (s[scnt - 1] == c && scnt > 0)
// 				start = scnt;
// 			else if (s[scnt + 1] == c || s[scnt + 1] == '\0')
// 			{
// 				end = (scnt + 1) - start;
// 				strs[strcnt] = ft_strsub(s, start, end);
// 				strcnt++;
// 			}
// 		}
// 		scnt++;
// 	}
// 	strs[strcnt] = NULL;
// 	return (strs);
// }

/*V2*/

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
//
// char	**ft_strsplit(char const *s, char c)
// {
// 	char	**strs;
// 	size_t	scnt;
// 	size_t	strcnt;
// 	size_t	start;
// 	size_t	end;
//
// 	scnt = 0;
// 	start = 0;
// 	end = 0;
// 	strcnt = 0;
// 	strs = (char **)malloc(sizeof(char *) * word_count(s, c));
// 	while (s[scnt] != '\0')
// 	{
// 		if (s[scnt] == c)
// 		{
// 			if (s[scnt + 1] != '\0' && s[scnt + 1] != c)
// 				start = scnt + 1;
// 			else if (scnt > 0 && s[scnt - 1] != c)
// 			{
// 				// end = (scnt - 1) - start;	//-1?
// 				end = scnt - start;
// 				strs[strcnt] = ft_strsub(s, start, end);
// 				strcnt++;
// 			}
// 		}
// 		scnt++;
// 	}
// 	return (strs);
// }

/*V1*/

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
//
// char	**ft_strsplit(char const *s, char c)
// {
// 	char	**strs;
// 	size_t	scnt;
// 	size_t	strcnt;
// 	size_t	start;
// 	size_t	end;
//
// 	scnt = 0;
// 	start = 0;
// 	end = 0;
// 	strcnt = 0;
// 	strs = (char **)malloc(sizeof(*strs) * word_count(s, c));
// 	while (s[scnt])
// 	{
// 		if (s[scnt] == c)
// 		{
// 			if (s[scnt + 1] != c)
// 				start = scnt + 1;
// 			else if (s[scnt - 1] != c)
// 			{
// 				end = end - start;
// 				strs[strcnt] = ft_strsub(s, start, end);
// 				strcnt++;
// 			}
// 		}
// 		scnt++;
// 	}
// 	return (strs);
// }
