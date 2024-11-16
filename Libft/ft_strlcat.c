/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:04:22 by almatsch          #+#    #+#             */
/*   Updated: 2024/10/11 11:25:48 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;
	size_t	total_len;

	d_len = (size_t)ft_strlen(dst);
	s_len = (size_t)ft_strlen((char *) src);
	i = 0;
	total_len = d_len + s_len;
	if (dstsize <= (size_t)d_len)
		return (dstsize + s_len);
	while (d_len + i < dstsize - 1 && src[i] != '\0')
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (total_len);
}
