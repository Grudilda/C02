#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *dest;
	char *src;
	unsigned int n;
		
	src = "Hello World !";
	dest = (char*)malloc(15);
	n = 6;
	printf("%s\n",src);
	dest = ft_strncpy(dest, src, n);
	printf("%s\n",dest);

	return(0);
}