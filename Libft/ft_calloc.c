/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:11:59 by almatsch          #+#    #+#             */
/*   Updated: 2024/10/30 20:27:48 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	size_t	*total_memory;

	total_size = count * size;
	if (count == 0 || size == 0)
		return (malloc(0));
	if (total_size / count != size)
		return (NULL);
	total_memory = malloc(total_size);
	if (total_memory == 0)
		return (NULL);
	ft_bzero((void *)total_memory, total_size);
	return ((void *)total_memory);
}
