#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int sign = 1;
	int result = 0;

	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str)
	{
		result = result * 10 + (*str - '0');
		str++;		
	}
	return (result * sign);

}
int	main(int argc, char **argv)
{
	printf("%d\n", ft_atoi(argv[1]));
	printf("%d\n", atoi(argv[1]));
}