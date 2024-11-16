/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 09:48:07 by almatsch          #+#    #+#             */
/*   Updated: 2024/10/22 21:06:39 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	char				*s_new;
	unsigned int		i;

	if (s == NULL || f == NULL)
		return (NULL);
	s_new = malloc(ft_strlen(s) + 1);
	if (s_new == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		s_new[i] = f(i, s[i]);
		i++;
	}
	s_new[i] = '\0';
	return (s_new);
}
