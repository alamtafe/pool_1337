char *ft_strcapitalize(char *str)
{
	int i;
	int t;
	i = 0;
	while(str[i])
	{
		t = 1;
		while((str[i] >= 'a' && str[i] <= 'z') || 
				(str[i] >= 'A' && str[i]  <= 'Z')
				|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (t == 1 ) 
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
				t = 0;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] += 32;
			i++;
		}
		i++;
	}
	return str;
}	
