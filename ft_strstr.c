/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvanwyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 15:08:29 by mvanwyk           #+#    #+#             */
/*   Updated: 2016/05/15 15:08:34 by mvanwyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		cnt;
	int		cnt2;

	if (to_find[0] == '\0')
		return (str);
	cnt = 0;
	cnt2 = 0;
	while (str[cnt] != '\0')
	{
		while (str[cnt2 + cnt] == to_find[cnt2])
		{
			cnt2++;
			if (to_find[cnt2] == '\0')
				return (&str[cnt]);
		}
		cnt2 = 0;
		cnt++;
	}
	return (0);
}

/*
**	I'M SURE DOING THE "IF...ELSE" IN THE SECOND WHILE LOOP IS UNDESIRABLE
**	THOUGH 42FILECHECKER SAYS IT'S OKAY
**	SEEMS WRONG THOUGH
*/
// char	*ft_strstr(char *str, char *to_find)
// {
// 	int		cnt;
// 	int		cnt2;
//
// 	if (to_find[0] == '\0')
// 		return (str);
// 	cnt = 0;
// 	cnt2 = 0;
// 	while (str[cnt] != '\0')
// 	{
// 		while (str[cnt2 + cnt] == to_find[cnt2])
// 		{
// 			if (str[cnt2 + cnt] == to_find[cnt2])
// 			{
// 				cnt2++;
// 				if (to_find[cnt2] == '\0')
// 					return (&str[cnt]);
// 			}
// 			else
// 			{
// 				return (0);
// 			}
// 		}
// 		cnt2 = 0;
// 		cnt++;
// 	}
// 	return (0);
// }

// char	*ft_strstr(char *str, char *to_find)
// {
// 	int		cnt;
// 	int		cnt2;
//
// 	if (to_find[0] == '\0')
// 		return (str);
// 	cnt = 0;
// 	cnt2 = 0;
// 	while (str[cnt] != '\0')
// 	{
// 		while (str[cnt2 + cnt] == to_find[cnt2])
// 		{
// 			cnt2++;
// 			if (to_find[cnt2] == '\0')
// 				return (&str[cnt]);
// 		}
// 		cnt2 = 0;
// 		cnt++;
// 	}
// 	return (0);
// }
