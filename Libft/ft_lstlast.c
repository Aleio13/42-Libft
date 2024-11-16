/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:06:52 by almatsch          #+#    #+#             */
/*   Updated: 2024/10/16 17:15:46 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tracker;

	if (lst == NULL)
		return (NULL);
	tracker = lst;
	while (tracker->next != NULL)
		tracker = tracker->next;
	return (tracker);
}
