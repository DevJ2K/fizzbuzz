/* ************************************************************************* */
/*                                                                           */
/*                                                       :::      ::::::::   */
/*   main1.c                                           :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+     */
/*   By: devj2k_ <devj2k_@student.42.fr>           +#+  +:+       +#+        */
/*                                               +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:23:22 by devj2k_          #+#    #+#             */
/*   Updated: 2023/12/08 10:24:18 by devj2k_         ###   ########.fr       */
/*                                                                           */
/* ************************************************************************* */

// WITH 42 NORM

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	size_t	nb;
	size_t	i;

	if (ac != 2)
		return (printf("Invalid argument.\n"));
	nb = atoi(av[1]);
	i = 0;
	while (i < nb)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("fizzbuzz\n");
		else if (i % 3 == 0)
			printf("fizz\n");
		else if (i % 5 == 0)
			printf("buzz\n");
		else
			printf("%zu\n", i);
		i++;
	}
	return (0);
}
