/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pbesson <pbesson@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 14:21:46 by pbesson      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 13:15:33 by pbesson     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	const char *s;

	s = src;
	if (src == NULL)
		return (0);
	while (n)
	{
		if (*s == c)
			return ((void*)s);
		s++;
		n--;
	}
	return (0);
}
