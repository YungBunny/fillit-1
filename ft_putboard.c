/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putboard.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 22:06:04 by rlutt             #+#    #+#             */
/*   Updated: 2017/01/28 22:06:05 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_put_board(char **brd)
{
	int		i;

	i = 0;
	while (brd[i])
	{
		ft_putendl(brd[i]);
		i++;
	}
}
