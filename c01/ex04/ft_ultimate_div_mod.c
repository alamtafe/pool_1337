//#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/int main()
//{
//	int a = 10;
//	int b = 5;
//	ft_ultimate_div_mod(&a,&b);
//	printf("%d\n%d\n",a,b);
//}	
