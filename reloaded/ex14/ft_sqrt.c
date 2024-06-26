/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: witong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:28:17 by witong            #+#    #+#             */
/*   Updated: 2024/05/15 13:39:47 by witong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;

	x = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (x <= nb / x && x <= 46340)
	{
		if (x * x == nb)
			return (x);
		x++;
	}
	return (0);
}
