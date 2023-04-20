/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:10:39 by jpacheco          #+#    #+#             */
/*   Updated: 2023/03/16 16:17:34 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9'))
		{
			return (0);
		}
		i ++;
	}
	return (1);
}
/*
int    main(void)
{
    int is_numeric;
    char a[] = "hello";
    is_numeric = ft_str_is_numeric(a);
    printf("%d\n", is_numeric);
}
*/