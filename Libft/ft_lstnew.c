/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:51:54 by almatsch          #+#    #+#             */
/*   Updated: 2024/10/22 21:11:27 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*c_new;

	c_new = malloc(sizeof(t_list));
	if (c_new == NULL)
		return (NULL);
	c_new->content = content;
	c_new->next = NULL;
	return (c_new);
}
