/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 22:51:36 by jpacheco          #+#    #+#             */
/*   Updated: 2023/03/14 22:49:56 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	printf("%lu\n", strlen("kbgkb"));
	printf("%d\n", ft_strlen("kbgkb"));
}
*/