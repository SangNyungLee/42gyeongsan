#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	char *str = "Hello World!";
	char *ptr = malloc(sizeof(char) * 11);

	ptr = (char *)str + 1;
	
	printf("%c", *ptr);

	return (0);
}