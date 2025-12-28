#include <unistd.h>

int	is_space(char	c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	main(int ac, char **s)
{
	int	i;

	if (ac == 2)
	{
		i = 0;
		while (s[1][i])
		{ 
			while (s[1][i] && is_space(s[1][i]))
					i++;
			while (s[1][i] && !is_space(s[1][i]))
			{
				write (1, &s[1][i], 1);
				i++;
			}
			while (s[1][i] && is_space(s[1][i]))
				i++;
			if (s[1][i])
				write (1, "   ", 3);
		}
	}
	write (1, "\n", 1);
	return (0);
}
