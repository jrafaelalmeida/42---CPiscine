/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 14:08:27 by jpacheco          #+#    #+#             */
/*   Updated: 2023/03/19 14:42:04 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	while (size >= 0)
	{
		i = 0;
		while (i < size -1)
		{
			if (tab [i] > tab [i +1])
			{
				temp = tab[i];
				tab[i] = tab [i + 1];
				tab [i + 1] = temp;
			}
			i ++;
		}
		size --;
	}
}
