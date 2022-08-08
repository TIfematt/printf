#include "../main.h"
#include <stdio.h>

int main(void)
{
	/* %c %s %% */
	int n = 0;

	n = _printf("%%\n");
	printf("n: %d\n", n);

	n = _printf("%%\n");
	printf("n: %d\n", n);



	_printf("Hello %c %s %% %d World\n", 'A', "John", 1230);
	printf("Hello %c %s %% %d World\n", 'A', "John", 1230);
	return (0);
}
