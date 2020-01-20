/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pbesson <pbesson@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/16 16:35:05 by pbesson      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/17 16:24:01 by pbesson     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	size;
	char	*mapi;

	i = 0;
	size = ft_strlen(s);
	mapi = NULL;
	if (s && f)
	{
		if (!(mapi = malloc(sizeof(char) * size + 1)))
			return (0);
		while (i < size)
		{
			mapi[i] = f(i, s[i]);
			i++;
		}
		mapi[i] = '\0';
		return (mapi);
	}
	return (0);
}
