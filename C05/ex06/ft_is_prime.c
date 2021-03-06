/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 10:43:39 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/23 10:22:05 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned int i;
	unsigned int n;

	n = nb;
	if (n < 3 || n % 2 == 0)
		return (n == 2);
	i = 3;
	while (i * i <= n)
	{
		if (!(n % i))
			return (0);
		i += 2;
	}
	return (1);
}
