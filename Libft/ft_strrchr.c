/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 08:40:39 by almatsch          #+#    #+#             */
/*   Updated: 2024/10/22 21:24:13 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*s, int c)
{
	const char		*str;

	str = s;
	while (*str != '\0')
		str++;
	while (str >= s)
	{
		if (*str == (char)c)
			return ((char *)str);
		str--;
	}
	return (NULL);
}
