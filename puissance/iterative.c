#include <stdio.h>
#include <stdlib.h>



/*iterative*/
int	call(int nb, int op)
{
	static int p = 1; /*p est pour puissance*/

	while (op > 0)
		{
			p = nb * p;
			/*result= result * nb*/
			op --;
			/*nb diminue a chaque tour de boucle, le minimun etant nb = 0
			// p minimum est de 1 car :
						2 p 0 = 1
						2 p 1 = 1 * 2
						2 p 2 = 1 * 2 * 2 * 2
			//
			*/
		}
	return (p);
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
