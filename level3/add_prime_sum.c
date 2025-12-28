#include <unistd.h>

void	ft_putnbr(int num)
{
	unsigned int	n;
	char	nn;

	if (num < 0)
	{
		write (1, "-", 1);
		n = num * -1;
	}
	else
		n = num;
	if (n >= 10)
		ft_putnbr(n / 10);
	nn = n % 10 + '0';
	write (1, &nn, 1);

}

int	is_prime(int n)
{
	int	i;
	if (n < 2)
		return (0);
	i = 2;
	while (i  <= n / 2)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	while (str[i] && ((str[i] >= 9 && str[i] <= 32) || str[i] == 32))
	       i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
	}
	res = 0;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

int	main (int ac, char **num)
{
	int	n;
	int	sum;

	if (ac != 2)
	{
		write (1, "0\n", 2);
                return (0);
	}
	n = ft_atoi(num[1]);
	if (n <= 0)
	{
		write (1, "0\n", 2);
		return (0);
	}
	sum = 0;
	while (n > 1)
	{
		if (is_prime(n))
			sum += n;
		n--;
	}
	ft_putnbr(sum);
	write (1, "\n", 1);
}
