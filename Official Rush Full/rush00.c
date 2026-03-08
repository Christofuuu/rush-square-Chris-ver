/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoudret <ctoudret@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 08:41:16 by ctoudret          #+#    #+#             */
/*   Updated: 2026/03/08 15:41:57 by ctoudret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			return ('o');
		else if (ligne == x)
			return ('o');
		else
			return ('-');
	}
	else if (colonne == y)
	{
		if (ligne == 1)
			return ('o');
		else if (ligne == x)
			return ('o');
		else
			return ('-');
	}
	else
	{
		if (ligne == 1 || ligne == x)
			return ('|');
		else
			return (' ');
	}
}
