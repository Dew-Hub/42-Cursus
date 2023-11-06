/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buonturk <buonturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 15:35:59 by buonturk          #+#    #+#             */
/*   Updated: 2023/02/25 18:35:30 by buonturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*result;

	i = 0;
	result = malloc(sizeof(int) * (max - min));
	if (max <= min || result == NULL)
	{
		result = NULL;
		return (result);
	}
	while (i < max - min)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
