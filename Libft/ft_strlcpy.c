/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:59:44 by almatsch          #+#    #+#             */
/*   Updated: 2024/10/22 21:23:44 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned char	*s;
	size_t			i;
	size_t			src_len;
	size_t			cpy_len;

	s = (unsigned char *) src;
	i = 0;
	src_len = ft_strlen((char *)src);
	if (size == 0)
		return (src_len);
	if (src_len < size - 1)
		cpy_len = src_len;
	else
		cpy_len = size - 1;
	while (i < cpy_len)
	{
		dest[i] = *s;
		i++;
		s++;
	}
	dest[i] = '\0';
	return (src_len);
}
