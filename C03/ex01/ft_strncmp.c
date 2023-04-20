/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 19:43:46 by jpacheco          #+#    #+#             */
/*   Updated: 2023/03/19 19:37:02 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] != '\0')
			i++;
	if (i >= n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
int main(void)
{

	unsigned int n = 6;
	char *str1 = "hello";
	char *str2 = "world ";

	printf("\n%d", strncmp(str1, str2, n));
	printf("\n%d",ft_strncmp(str1, str2, n));

}
*/
