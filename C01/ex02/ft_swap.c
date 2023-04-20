/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:58:20 by jpacheco          #+#    #+#             */
/*   Updated: 2023/03/14 22:34:00 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

int main() {

    int x = 42;
    int y = 50;
    int *ptra;
    int *ptrb;

    ptra = &x;
    ptrb = &y;

    ft_swap(ptra, ptrb);
    printf("%d%d\n", x,y);
}*/