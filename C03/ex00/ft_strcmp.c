/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 18:40:10 by jpacheco          #+#    #+#             */
/*   Updated: 2023/03/19 11:22:47 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
	{
		i++;
	}
	result = s1[i] - s2[i];
	return (result);
}

int	main(void)
{
	char *str1 = "Hellob";
	char *str2 = "Helloy";
	printf("%d", ft_strcmp(str1, str2));
	printf("\n%d", strcmp(str1, str2));

}

