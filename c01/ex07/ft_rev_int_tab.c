//#include <stdio.h>
void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int temp;
	i = 0;
	while(i < size - 1)
	{
		temp = tab[i];
		tab[i] = tab[size -1];
		tab[size - 1] = temp;
		i++;
		size--;
	}
}
//int main()
//{
//	int i =0;
//	int tab[] = {1,2,3,4,5};
//	ft_rev_int_tab(tab,5);
//	while(i < 5)
//	{
//		printf("%d" , tab[i]);
//		i++;
///	}
//}
