#include <stdio.h>
#include <stdlib.h>

/*recursive*/
int call(int nb)
{
	static int p = 1;

	if (op == 0)
		return (1);
	else
		{
			p = op * nb;
			/*
			// 1 = 0 p nb
			// nb = 1 * nb 
			// nb * nb = 1 * nb * nb
			*/	
			return (call(nb, ..............));
		}
}
int	main(int argc, char **argv)
{
	int nb = 2;
	int op = 4;

	nb = atoi(argv[1]);
	op = atoi(argv[2]);

	printf("Power of %d, %d : \n", nb, op);

	printf("%d", call(nb, op));
}
