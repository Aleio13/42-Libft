/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almatsch <almatsch@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:43:24 by almatsch          #+#    #+#             */
/*   Updated: 2024/10/22 21:22:37 by almatsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_rev_int_tab(char *tab, int size)
{
	int	start;
	int	end;
	int	tmp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		tmp = tab[start];
		tab[start] = tab[end];
		tab[end] = tmp;
		start++;
		end--;
	}
}

void	check_cases(int *nb, int *fd)
{
	if (*nb < 0 && *nb != -2147483648)
	{
		write (*fd, "-", 1);
		*nb = *nb * -1;
	}
	else if (*nb == 0)
	{
		write (*fd, "0", 1);
	}
	else if (*nb == -2147483648)
	{
		write (*fd, "-2147483648", 11);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	nbr[12];

	i = 0;
	check_cases(&n, &fd);
	while (n > 0)
	{
		nbr[i] = (n % 10) + 48;
		n = n / 10;
		i++;
	}
	nbr[i] = '\0';
	ft_rev_int_tab(nbr, i);
	i = 0;
	while (nbr[i] != '\0')
	{
		write(fd, &nbr[i], 1);
		i++;
	}
}
