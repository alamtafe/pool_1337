#include <stdio.h>
void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;
	i = 0;
	while(i < size - 1)
	{
		j = 0;
		while (j < size -i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}	
}
int main()
{
	int i = 0;
	int tab[] = {5,2,8,1,3};
	ft_sort_int_tab(tab,5);
	while(i < 5)
	{
		printf("%d",tab[i]);
		i++;
	}
}
