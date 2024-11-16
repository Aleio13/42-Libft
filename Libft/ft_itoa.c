/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:22:42 by almatsch          #+#    #+#             */
/*   Updated: 2024/10/22 21:07:50 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_n(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
	{
		if (n == 0)
			return (1);
		n = n * -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	ft_rev_str_tab(char *tab, int size)
{
	int		start;
	int		end;
	char	tmp;

	start = 0;
	end = size - 1;
	if (tab[0] == '-')
		start = 1;
	while (start < end)
	{
		tmp = tab[start];
		tab[start] = tab[end];
		tab[end] = tmp;
		start++;
		end--;
	}
}

char	*convert_i(int n, char *str)
{
	int		i;

	i = 0;
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (n < 0)
	{
		str[i++] = '-';
		n = -n;
	}
	while (n > 0)
	{
		str[i++] = n % 10 + '0';
		n = n / 10;
	}
	str[i] = '\0';
	ft_rev_str_tab(str, i);
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else
	{
		str = malloc(count_n(n) + 1);
		if (str == NULL)
			return (NULL);
		return (convert_i(n, str));
	}
}
