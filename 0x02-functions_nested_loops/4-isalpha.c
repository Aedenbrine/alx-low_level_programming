#include <stdio.h>
#include "main.h"

int _isalpha(int c)
{
	if ((c <= 90) && (c >= 65))
	return (1);
	else if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
