//#include <stdio.h>
int ft_str_is_alpha(char *str)
{
	int 	i;

	i = 0;
	while(str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			i++;
		else if (str[i] >= 97 &&str[i] <= 122)
			i++;
		else
			return(0);
	}
	return (1);
}
//int main()
//{
//	printf("%d\n",ft_str_is_alpha("hELlo"));
//	printf("%d\n",ft_str_is_alpha("he1Lo"));
//}	
