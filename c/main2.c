// WITHOUT 42 NORM

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac != 2)
		return (printf("Invalid argument.\n"));
	size_t nb = atoi(av[1]);
	for (size_t i = 0; i < nb; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("fizzbuzz\n");
		else if (i % 3 == 0)
			printf("fizz\n");
		else if (i % 5 == 0)
			printf("buzz\n");
		else
			printf("%zu\n", i);
	}
	return (0);
}
