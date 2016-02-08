#include <stdio.h>
#include <stdlib.h>

/*recursive*/
int call(int number, int power)
{
	static int result = 1;

	if (power == 1)
		return (result); /*si a puissance 0 alors vaut 1*/
	result = result * number;
	printf("Count result :%d\n", result);
	return (call(result, power-1));
}

int	main(int argc, char **argv)
{
	int number;
	int power;

	number = atoi(argv[1]);
	power = atoi(argv[2]);
	printf("Result of : %dpow(%d) \t %d\n", number, power, call(number, power));
	(void)argc;
	return 0x0;
}
