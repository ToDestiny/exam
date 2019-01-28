/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 17:15:23 by acolas            #+#    #+#             */
/*   Updated: 2019/01/28 17:56:15 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int	*range;
	int	i;

	if (end > start)
		range = (int *)malloc(sizeof(int) * (end - start) + 1);
	else
		range = (int *)malloc(sizeof(int) * (start - end) + 1);

	i = 0;
	while (start != end)
	{
		range[i++] = start;
		start += (start > end) ? -1 : 1;
	}
	range[i] = end;
	return (range);
}
