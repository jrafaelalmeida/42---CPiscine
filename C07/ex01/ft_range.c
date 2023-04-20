/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 15:01:24 by jpacheco          #+#    #+#             */
/*   Updated: 2023/03/28 14:18:53 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;

	if (min >= max)
		return (0);
	dest = (int *)malloc(sizeof(*dest) * (max - min));
	i = 0;
	while (min + i < max)
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}

/* int		main(void)
{
	int min;
	int max;
	int i;
	int *arr;
	
	min = 1;
	max = 200;

	arr = ft_range(min, max);

	for( i = 0; i < max -min; i++)
	{
	printf("%d\n",arr[i]);
	}
} */