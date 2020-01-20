/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pbesson <pbesson@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 17:09:09 by pbesson      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/29 18:51:27 by pbesson     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_strcpy(char *src, char *dst)
{
	int i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char			*ft_strdup(const char *src)
{
	char *dst;

	if (!(dst = malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (0);
	return (ft_strcpy((char *)src, dst));
}
