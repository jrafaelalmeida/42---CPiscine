/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:18:14 by jpacheco          #+#    #+#             */
/*   Updated: 2023/03/16 17:18:13 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
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
    int islower;
    char a[] = "123";
    islower = ft_str_is_lowercase(a);
    printf("%d\n", islower);
}
*/