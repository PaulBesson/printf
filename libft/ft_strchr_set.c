/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr_set.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pbesson <pbesson@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/19 18:08:11 by pbesson      #+#   ##    ##    #+#       */
/*   Updated: 2019/12/19 21:43:42 by pbesson     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr_set(const char *str, char *set)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (set[j])
		{
			if (str[i] == set[j])
				return ((char *)str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
