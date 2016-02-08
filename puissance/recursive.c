#include <stdio.h>
#include <stdlib.h>

/*recursive*/
int call(int nb, int op)
{
	/*nb = 2 op = 3*/
	static int p = 1;

	if (op == 1)
		return (p); /*si a puissance 0 alors vaut 1*/
	else
		{
			/*sinon vaut nb * nb N fois*/
			return ((nb * p) * op --);
			/*on veut op--*/
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
