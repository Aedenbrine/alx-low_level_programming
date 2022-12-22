#include "main.h"


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *n1 = "12345678923445678901234567881234";
	char *n2 = "98741232318193298928392938392939";
	char *r[100];
	int size_r[10]

		res = infinite_add(n1, n2, r, 100);
	if (res == 0)
	{
		printf("error\n");
	}
	else
	{
		printf("%s + %s = %s\n",  n1, n2, res);
	}
	n1 = "1234567890";
	n2 = "1";
	res = infinite_add(n1, n2);
	return (0);
}

