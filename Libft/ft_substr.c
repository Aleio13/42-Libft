/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:59:00 by almatsch          #+#    #+#             */
/*   Updated: 2024/10/22 21:24:26 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char	*mem;
	unsigned int	s_len;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	s_len = (unsigned int)ft_strlen(s);
	if (start >= s_len)
	{
		mem = (unsigned char *)malloc(1);
		if (mem == NULL)
			return (NULL);
		mem[0] = '\0';
		return ((char *)mem);
	}
	if ((unsigned int)len > s_len - start)
		len = s_len - start;
	mem = (unsigned char *)malloc(len + 1);
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (i < len)
		mem[i++] = s[start++];
	mem[i] = '\0';
	return ((char *)mem);
}
