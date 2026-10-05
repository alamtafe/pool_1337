#include "ft_stock_str.h"
//#include <unistd.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while(str[i])
		i++;
	return (i);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *tab;
	int i;
	int j;
	tab = malloc((ac + 1) * sizeof(t_stock_str));
	if(!tab)
		return(NULL);
	i = 0;
	while(i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		j = 0;
		tab[i].copy = malloc(tab[i].size + 1);
		if(!tab[i].copy)
		{
			j = 0;
			while(j < i)
			{
				free(tab[j].copy);
				j++;
			}
			free(tab);
			return(NULL);
		}
		j = 0;
		while(tab[i].str[j])
		{
			tab[i].copy[j] = tab[i].str[j];
			j++;
		}
		tab[i].copy[j] = '\0';
		i++;
	}
	tab[i].str = NULL;
	return(tab);
}

//int main(int argc, char **argv )
//{
//	int i;
//	int j;
//	t_stock_str *tab;
//	tab = ft_strs_to_tab(argc -1 , &argv[1]);
//	i = 0;
//	while(tab[i].str)
//	{
//		j = 0;
//		while(tab[i].str[j])
//		{
//			write(1,&tab[i].str[j],1);
//			j++;
//		}
//		free(tab[i].copy);
//		i++;
//	}	
//	free(tab);
//}
