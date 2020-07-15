/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamailul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 10:44:26 by mamailul          #+#    #+#             */
/*   Updated: 2020/07/15 11:59:00 by mamailul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdio.h"
#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
void output1(int i, int y)
{
		if(i == 1 || i == y)
				ft_putchar ('o');
		else
				ft_putchar ('|');
}

void rush(int x, int y)
{
		int i;
		int j;

		i = 1;
		while (i <= y)
		{
			j = 1;
			while (j <= x)
			{
					if (j == 1 || j == x)
							output1(i, y);
					else
					{
							if (i == 1 || i == y);
									ft_putchar('-');
							else
									ft_putchar(' ');
				 }
					j++;
			}
			i++;
			ft_putchar('\n');
		}
}

int main(void)
{
		rush(5, 5);
		return (0);
}

