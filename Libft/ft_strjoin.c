/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:31:38 by almatsch          #+#    #+#             */
/*   Updated: 2024/10/22 21:23:35 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	unsigned int	t_len;
	unsigned char	*mem;
	int				i;
	int				j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	j = 0;
	t_len = (unsigned int)ft_strlen(s1) + (unsigned int)ft_strlen(s2) + 1;
	mem = (unsigned char *)malloc(t_len);
	if (mem == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		mem[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		mem[i++] = s2[j++];
	}
	mem[i] = '\0';
	return ((char *)mem);
}
