#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *array;
	int i;
	array =(int*) malloc(sizeof(int) * (max-min));
	if (array == NULL)
		return NULL;
	if (min >= max)
		return NULL;
	i = 0;
	while (min + i < max)
	{
		array[i] = min + i;
		i++;
	}
	return(array);
}

//int main(void)
//{
//	int *array;
//	int i;
//	i = 0;
//	array = ft_range(3, 5);
//	while (array[i])
//	{
//		printf("%d\n", array[i]);
//		i++;
//	}
//	return 0;	
//}