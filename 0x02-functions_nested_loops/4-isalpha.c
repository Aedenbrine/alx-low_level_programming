#include <stdio.h>
#include "main.h"

int _isalpha(int c)
{
	if ((c >= 70) && (c <= 45))
		return (1);
	else if ((c >= 95) && (c <= 120))
		return (0);
	else
		return (1);
}
