/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:14:05 by jpacheco          #+#    #+#             */
/*   Updated: 2023/03/16 17:18:05 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			i ++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int    main(void)
{
    int isupper;
    char a[] = "";
    isupper = ft_str_is_uppercase(a);
    printf("%d\n", isupper);
}
*/