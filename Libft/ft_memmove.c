/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:36:05 by almatsch          #+#    #+#             */
/*   Updated: 2024/10/22 21:12:01 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned int		i;

	i = 0;
	d = (unsigned char *) dst;
	s = (unsigned const char *) src;
	if (d == s || len == 0)
		return (dst);
	if (dst < src || dst >= (src + len))
		return (ft_memcpy(dst, src, len));
	else
	{
		i = len;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	return (dst);
}
