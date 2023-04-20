/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:46:52 by jpacheco          #+#    #+#             */
/*   Updated: 2023/03/16 18:02:36 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 126))
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
int	main()
{
	int isprint;
	char a[] = "€";
	isprint = ft_str_is_printable(a);
	printf("%d\n", isprint);
}
*/