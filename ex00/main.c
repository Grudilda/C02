#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *dest;
	char *src;
	
	src = "Hello World !";
	dest = (char*)malloc(15);
	printf("%s\n",src);
	dest = ft_strcpy(dest, src);
	printf("%s\n",dest);

	return(0);
}