/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvanwyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 15:12:51 by mvanwyk           #+#    #+#             */
/*   Updated: 2016/05/15 15:26:50 by mvanwyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Allocates a memory area for a new string (char *).
**	Performs null-termination, only the amount of characters
**	in the string need be supplied.
*/

char	*ft_strnew(size_t size)
{
	char	*newstr;
	size_t	cnt;

	cnt = 0;
	newstr = (char *)malloc(sizeof(char) * (size + 1));
	if (newstr)
	{
		while (cnt <= size)
		{
			newstr[cnt] = '\0';
			cnt++;
		}
	}
	else
		return (NULL);
	return (newstr);
}
