//#include <stdio.h>
char *ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
//int main()
//{	
//	char dest[6];
//	ft_strcpy(dest,"hello");
//	printf("%s\n", dest);
//}
