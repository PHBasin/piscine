/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phbasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 20:58:23 by phbasin           #+#    #+#             */
/*   Updated: 2020/12/16 21:33:49 by phbasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*first_elem;

	if ((first_elem = ft_create_elem(data)))
	{
		if (*begin_list)
			first_elem->next = *begin_list;
		*begin_list = first_elem;
	}
}
