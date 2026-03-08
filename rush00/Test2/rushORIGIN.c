/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushORIGIN.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoudret <ctoudret@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 08:41:16 by ctoudret          #+#    #+#             */
/*   Updated: 2026/03/08 09:15:41 by ctoudret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);
char	lettre(int ligne, int colonne, int x, int y);
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	ligne;
	int	colonne;

	colonne = 1;
	ligne = 1;
	while (colonne <= y)
	{
		while (ligne <= x)
		{
			ft_putchar(lettre(ligne, colonne, x, y));
			ligne++;
		}
		ft_putchar('\n');
		ligne = 1;
		colonne++;
	}
}

char	lettre(int ligne, int colonne, int x, int y)
{
	if (colonne == 1)
	{
		if (ligne == 1)
			return ('X');/*Change X en un char (ex: A or o or -)*/
		else if (ligne == x)
			return ('X');/*Change X en un char (ex: A or o or -)*/
		else
			return ('X');/*Change X en un char (ex: A or o or -)*/
	}
	else if (colonne == y)
	{
		if (ligne == 1)
			return ('X');/*Change X en un char (ex: A or o or -)*/
		else if (ligne == x)
			return ('X');/*Change X en un char (ex: A or o or -)*/
		else
			return ('X');/*Change X en un char (ex: A or o or -)*/
	}
	else
	{
		if (ligne == 1 || ligne == x)
			return ('X');/*Change X en un char (ex: A or o or -)*/
		else
			return (' ');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	rush(5, 3);
	rush(5, 1);
	rush(1, 1);
	rush(1, 5);
	rush(4, 4);
	return (0);
}
