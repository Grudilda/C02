#include <stdio.h>

int main()
{
	char *str0;
	char *str1;
	char *str2;
	char *str3;

	str0 = "HelloWorld";
	str1 = "0123456";
	str2 = "Hello World !";
	str3 = "\0";
	printf("%s r=%i\n",str0, ft_str_is_alpha(str0));
	printf("%s r=%i\n",str1, ft_str_is_alpha(str1));
	printf("%s r=%i\n",str2, ft_str_is_alpha(str2));
	printf("*%s* r=%i\n",str3, ft_str_is_alpha(str3));
	return(0);
}

