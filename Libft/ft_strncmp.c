/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 21:55:20 by almatsch          #+#    #+#             */
/*   Updated: 2024/10/23 15:36:57 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] -(unsigned char)s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		if (s1[i] == '\0' && s2[i] != '\0')
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}
