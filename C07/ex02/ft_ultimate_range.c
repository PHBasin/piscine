/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 07:36:52 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/28 18:15:32 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = malloc(sizeof(**range) * (max - min));
	i = 0;
	while (i < max - min)
	{
		range[0][i] = min + i;
		i++;
	}
	return (i);
}
