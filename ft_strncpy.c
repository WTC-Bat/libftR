/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvanwyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 10:23:33 by mvanwyk           #+#    #+#             */
/*   Updated: 2016/05/09 10:23:34 by mvanwyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// if (src[0] == '\0')
// {
// 	while (cnt < n)
// 	{
// 		dest[cnt] = '\0';
// 		cnt++;
// 	}
// 	return (dest);
// }

char	*ft_strncpy(char *dest, char *src, size_t n)
{
	size_t	cnt;

	cnt = 0;
	while (cnt < n)
	{
		if ((src[cnt] == '\0') && (dest[cnt] == '\0') && (cnt < n))
			dest[cnt] = '\0';
		else if (src[cnt] != '\0')
			dest[cnt] = src[cnt];
		cnt++;
	}
	return (dest);
}

// char	*ft_strncpy(char *dest, char *src, size_t n)
// {
// 	size_t	cnt;
//
// 	cnt = 0;
// 	while (cnt < n)
// 	{
// 		dest[cnt] = src[cnt];
// 		cnt++;
// 	}
// 	return (dest);
// }
