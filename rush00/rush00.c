/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 20:46:49 by francisco         #+#    #+#             */
/*   Updated: 2023/03/15 20:41:35 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush_lines(int linha, int coluna, int x, int y)
{
	if (linha == 1 && coluna == 1)
		ft_putchar('o');
	else if ((linha == x && coluna == y) && x != 1 && y != 1)
		ft_putchar('o');
	else if (linha == x && coluna == 1)
		ft_putchar('o');
	else if (linha == 1 && coluna == y)
		ft_putchar('o');
	else if (linha == 1 && coluna <= x && linha >= 1)
		ft_putchar('-');
	else if (linha == y && coluna <= x && linha >= 1)
		ft_putchar('-');
	else if (linha >= 1 && linha <= x && coluna == 1)
		ft_putchar('|');
	else if ((linha >= 1 && linha <= x && coluna == x))
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	linha;
	int	coluna;

	coluna = 1;
	while (coluna <= y)
	{
		linha = 1;
		while (linha <= x)
		{
			rush_lines(linha, coluna, x, y);
			linha++;
		}
		coluna++;
		ft_putchar('\n');
	}
}

int		main()
{
	rush(1, 5);
	return (0);
}
