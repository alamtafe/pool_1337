#include <stdlib.h>
int not_or_yes(char c , char *charset)
{
	int i;
	i = 0;
	while (charset[i])
	{
		if(charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}
int count_words(char *str, char *charset)
{
	int i;
	int wd;
	wd = 0;
	i = 0;
	while(str[i])//,,,,adam;a;a;;;
	{
		while(not_or_yes(str[i],charset))
				i++;
		if(str[i])
			wd++;
		while(str[i] && !not_or_yes(str[i],charset))
			i++;
	}
	return (wd);
}

char **ft_split(char *str, char *charset)
{
	char **res;
	int wd;
	int i;
	int j;
	int n;
	int start;
	int end;
	wd = count_words(str,charset);
	res = malloc((wd + 1) * sizeof(char *));
	if(!res)
		return (NULL);
	i = 0;
	j = 0;
	while(i < wd)
	{
		while(str[j] && not_or_yes(str[j], charset))
			j++;
		start = j;
		while(str[j] && !not_or_yes(str[j],charset))
			j++;
		end = j;
		res[i] = malloc((end - start) + 1 );
		if(!res[i])
			return(NULL);
		n = 0;
		while(n < end - start)
		{
			res[i][n] = str[start + n];
			n++;
		}
		res[i][n] = '\0';
		i++;
	}
	res[i] = NULL;
	return (res);
}
