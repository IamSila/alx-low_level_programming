#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void)
{
	char *s;

	s = str_concat("Betty ", "ALX");
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}

	printf("%s\n", s);
	free(s);
	return (0);
}
