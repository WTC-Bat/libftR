/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvanwyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 10:22:47 by mvanwyk           #+#    #+#             */
/*   Updated: 2016/05/09 10:22:50 by mvanwyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The difference between by amount, not just +1, -1 or 0*/
int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		s1++;
		s2++;
		if (*s1 == '\0')
			return (0);
	}
	return (*s1 - *s2);
}