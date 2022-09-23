#include "libft.h"

static int		ft_div_counter(char const *s, char c)
{
	int i;
	int counter;

	counter = 0;
	if (s[0] && s[0] != c)
		counter++;
	i = 0;
	while (i < (int)ft_strlen(s))
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1])
			counter++;
		i++;
	}
	return (counter);
}

/*
** This auxiliar function segments the 's' array into parts.
*/

static char		*ft_segmentator(char const *s, char c, int i)
{
	int		j;
	int		k;
	char	*resultant_string;

	j = i;
	while (s[i] && s[i] != c)
		i++;
	resultant_string = (char *)malloc(sizeof(char) * ((i - j) + 1));
	if (!resultant_string)
		return (0);
	k = 0;
	while (j != i)
	{
		resultant_string[k] = s[j];
		k++;
		j++;
	}
	resultant_string[k] = '\0';
	return (resultant_string);
}

char			**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;

	if (!s)
		return (0);
	array = (char **)malloc(sizeof(char *) * (ft_div_counter(s, c) + 1));
	if (!array)
		return (0);
	i = 0;
	j = 0;
	while (i <= (int)ft_strlen(s) && ft_div_counter(s, c))
	{
		if (ft_strlen(ft_segmentator(s, c, i)))
		{
			array[j] = ft_segmentator(s, c, i);
			i += (ft_strlen(array[j]) + 1);
			j++;
		}
		else
			i++;
	}
	array[j] = 0;
	return (array);
}

/* #include <stdio.h>

int main()
{
	printf("%s", ft_split("Hola que tal", 'a'));
	return (0);
} */