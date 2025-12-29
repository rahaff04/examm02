unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int	g;

	if (a == 0 || b == 0)
		return (0);
	g = 0;
	if (a > b)
		g = a;
	else
		g = b;
	while (1)
	{
		if ((g % a == 0) && (g % b == 0))
			return (g);
		g++;
	}
}

#include <stdio.h>

int	main (void)
{
	printf("%d", lcm(2, 14));
	return (0);
}
