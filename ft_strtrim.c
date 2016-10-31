/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvanwyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 15:05:21 by mvanwyk           #+#    #+#             */
/*   Updated: 2016/05/15 15:05:23 by mvanwyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	has_whitespace(char const *s)
{
	int	end;

	end = ft_strlen(s) - 1;
	if (s[0] == ' ' || s[0] == '\t' || s[0] == '\n' ||
		s[end] == ' ' || s[end] == '\t' || s[end] == '\n')
		return (1);
	else
		return (0);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	size_t	cnt;
	size_t	start;
	size_t	end;

	if (has_whitespace(s) == 0)
		return (ft_strdup(s));
	start = 0;
	cnt = 0;
	end = ft_strlen(s) - 1;
	str = (char *)malloc(sizeof(char) * end + 2);
	if (str == NULL)
		return (NULL);
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	while (start <= end)
		str[cnt++] = s[start++];
	str[cnt] = '\0';
	return (str);
}
