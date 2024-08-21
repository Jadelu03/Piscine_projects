/*
the	strlcpy(void) function copies up to <size>-1 characters from the NUL-terminated string <src> to <dst>.

*/

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	return (len);
}

//int	main(void)
//{
//	unsigned int size;
//	int len;
//	size = 5;
//	char src[] = "hello world";
//	char dest[100];

//	len = ft_strlcpy(dest, src, size);
//	printf("%d\n", len);

//	return (0);
//}