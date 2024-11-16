/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:08:16 by almatsch          #+#    #+#             */
/*   Updated: 2024/10/22 21:23:03 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char	*s, int c)
{
	int		i;
	char	cr;

	i = 0;
	cr = c;
	while (s[i] != '\0')
	{
		if (s[i] == cr)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == cr)
		return ((char *)&s[i]);
	return (NULL);
}
