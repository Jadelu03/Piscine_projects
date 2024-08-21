int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (*src)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int len;
	char *result;
	len = ft_strlen(src);
	result = (*char)malloc(len * sizeof(char))
}