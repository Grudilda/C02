char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (n)
	{
		dest[i] = src[i];
		printf("%u\n", i);
		i++;
		n--;
	}
	dest[i] = '\0';
	return(dest);
}