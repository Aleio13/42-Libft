/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:53:56 by almatsch          #+#    #+#             */
/*   Updated: 2024/10/22 21:24:20 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	trimlen(unsigned int s1_len, char const *s1,
char const *set, unsigned int *i)
{
	unsigned int	m_len;

	while (s1[*i] != '\0' && ft_strchr(set, s1[*i]))
		(*i)++;
	while (s1_len > 0 && ft_strchr(set, s1[s1_len - 1]))
		s1_len--;
	if (s1_len > *i)
	{
		m_len = s1_len - *i;
		return (m_len);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	s1_len;
	unsigned char	*mem;
	unsigned int	i;
	unsigned int	m_len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	s1_len = (unsigned int)ft_strlen(s1);
	m_len = trimlen(s1_len, s1, set, &i);
	if (m_len == 0)
	{
		mem = (unsigned char *)malloc(1);
		if (mem == NULL)
			return (NULL);
		mem[0] = '\0';
		return ((char *)mem);
	}
	mem = (unsigned char *)malloc(m_len + 1);
	if (mem == NULL)
		return (NULL);
	ft_memcpy(mem, s1 + i, m_len);
	mem[m_len] = '\0';
	return ((char *)mem);
}
