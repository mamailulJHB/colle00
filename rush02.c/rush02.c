/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamailul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:03:34 by mamailul          #+#    #+#             */
/*   Updated: 2020/07/15 13:05:09 by mamailul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	middle(int x, int y)
{
	int	i;
	int	count;

	if (y > 1)
	{
		count = 0;
		while (count < (y - 2))
		{
			ft_putchar('\n');
			ft_putchar('*');
			i = 0;
			while (i < (x - 2))
			{
				ft_putchar(' ');
				++i;
			}
			if (x > 1)
				ft_putchar('*');
			++count;
		}
	}
}

void	end(int x, int y)
{
	int	i;

	if (x > 0 && y > 1)
	{
		ft_putchar('\n');
		ft_putchar('\\');
		i = 0;
		while (i < (x - 2))
		{
			ft_putchar('*');
			++i;
		}
		if (x > 1)
			ft_putchar('/');
	}
	if (x > 0 && y > 0)
		ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x > 0 && y > 0)
		ft_putchar('/');
	i = 0;
	while (i < (x - 2) && y > 0)
	{
		ft_putchar('*');
		++i;
	}
	if (x > 1 && y > 0)
		ft_putchar('\\');
	middle(x, y);
	end(x, y);
}

