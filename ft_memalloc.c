/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvanwyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 15:13:55 by mvanwyk           #+#    #+#             */
/*   Updated: 2016/05/15 15:13:57 by mvanwyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*mem;
	size_t			cnt;

	mem = (unsigned char *)malloc(sizeof(unsigned char) * size);
	cnt = 0;
	if (mem == NULL)
		return (NULL);
	while (cnt < size)
	{
		mem[cnt] = 0;
		cnt++;
	}
	return (mem);
}
