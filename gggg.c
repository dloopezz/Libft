static int ft_cont(const char *str, char c)
{
	int	i;
	int n_words;
	int flag;

	i = 0;
	n_words = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && flag == 0)
		{
			flag = 1;
			n_words++;
			i++;
		}
		else if (str[i] == c)
			flag = 0;
		i++;
	}
    if (str[i - 1] == c)
        n_words++;
	return (n_words);
}

static int	ft_cont2(const char *str, char c)
{
	int i;
	int trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

#include <stdio.h>

int main()
{
	char str[] = "viva er beti";
    char c = 'z';
	printf("%d\n", ft_cont(str, c));
	printf("%d", ft_cont2(str, c));
}