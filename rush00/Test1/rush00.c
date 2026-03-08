/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruffin <eruffin@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 19:28:21 by eruffin           #+#    #+#             */
/*   Updated: 2026/03/08 03:36:14 by ctoudret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	h(int x, int y);
void	v(int x, int y);

int rush(int x, int y)
{
	if (y > 1)
	{
		h(x, y);
		write(1, "\n", 1);
	}
	while ((y - 2) > 0)
	{
		v(x, y);
		write(1, "\n", 1);
		y--;
	}
        h(x, y);
        write(1, "\n", 1);

}

void	h(int x, int y)
{
	char	c;

	c = '-';
	if ((y > 1) && (x > 1))
		write(1, "o", 1);
	while ((x - 2) > 0)
	{	
		write(1, &c, 1);
		x--;
	}
	write(1, "o", 1);
}

void    v(int x, int y)
{
        char    c;

        c = ' ';
	if ((y > 1) && (x > 1))
        	write(1, "|", 1);
        while ((x - 2) > 0)
        {
                write(1, &c, 1);
                x--;
        }
        write(1, "|", 1);
}

int	main(void)
{
	rush(5,3);	
	rush(5,1);
	rush(1,1);
	rush(1,5);
	rush(4,4);
	rush(0,0);

	return (0);
}

