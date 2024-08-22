#include <stdio.h>
#include <stdlib.h>
char	*ft_strdup(char *src)
{
	int len;
	char *result;
	int i;
	len = 0;
	while (src[len] != '\0')
		len++;
	result = (char*) malloc(sizeof(char) * (len+1));
	i = 0;
	if (result == NULL)	
		return NULL;
	else
	{
		while(src[i])
		{
			result[i] = src[i];
			i++;
		}
		result[i] = '\0';
		return (result);
	}
}

//int main(void)
//{
//	char str[] = "hello world";
//	char *result;
//	result = ft_strdup(str);
//	printf("%s\n", result);
//	return (0);
//}
