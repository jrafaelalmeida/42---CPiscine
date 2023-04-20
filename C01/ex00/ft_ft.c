/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:27:43 by jpacheco          #+#    #+#             */
/*   Updated: 2023/03/14 22:34:08 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
#include <stdio.h>

int main(void)
{
    int a;
    int *ptr;
    printf("a1 %d\n", a);
    ptr = &a;
    printf("a2 %d\n", a);
    printf("a1 %d\n", ptr);
    ft_ft(ptr);

    printf("ptr %d\n", ptr);
    printf("&a %d\n", &a);
    printf("a %d\n", a);
}
*/