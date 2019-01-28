/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 16:08:22 by acolas            #+#    #+#             */
/*   Updated: 2019/01/28 16:48:54 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char *av[])
{
	if (ac == 4)
	{
		if (av[2][0] == '+')
			printf ("%d", atoi(av[1]) + atoi(av[3]));
		if (av[2][0] == '-')
			printf ("%d", atoi(av[1]) - atoi(av[3]));
		if (av[2][0] == '*')
			printf ("%d", atoi(av[1]) * atoi(av[3]));
		if (av[2][0] == '/')
			printf ("%d", atoi(av[1]) / atoi(av[3]));
		if (av[2][0] == '%')
			printf ("%d", atoi(av[1]) % atoi(av[3]));
	}	
	printf("\n");
	return (0);
}
