/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:06:30 by jpacheco          #+#    #+#             */
/*   Updated: 2023/03/16 19:14:50 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] -32;
		}
		i++;
	}
	return (str);
}
/*
int main()
{
	char a[] = "fhjdhfjhfjhfkjdsf";
	
	printf("%s\n", ft_strupcase(a));
	return (0);
}
*/