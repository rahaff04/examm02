#include <unistd.h>

int	main(int ac, char **str)
{
	int	i;
	int	j;

	if (ac == 3)
	{
		i = 0;
		j = 0;
		while (str[1][i] && str[2][j])
		{
			if (str[2][j] == str[1][i])
				i++;
			j++;
		}
		if (str[1][i] == 0)
			write (1, "1", 1);
		else 
			write (1, "0", 1);
	}
	write (1, "\n", 1);
}
