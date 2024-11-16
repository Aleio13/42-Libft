/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:27:05 by almatsch          #+#    #+#             */
/*   Updated: 2024/10/22 21:24:03 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		h_len;
	size_t		n_len;

	h_len = 0;
	n_len = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[h_len] != '\0' && h_len < len)
	{
		if (haystack[h_len] == needle[n_len])
		{
			n_len = 0;
			while (haystack[h_len + n_len] == needle[n_len] && \
			n_len + h_len < len && needle[n_len] != '\0')
			{
				n_len++;
			}
			if (needle[n_len] == '\0')
				return ((char *)&haystack[h_len]);
			n_len = 0;
		}
		h_len++;
	}
	return (NULL);
}
