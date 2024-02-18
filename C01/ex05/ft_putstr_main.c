#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (i[str] != '\0')
	{
		write (1, &i[str], 1);
		i++;
	}	
}

int	main()
{
	char *c = "Hello";
	ft_putstr(c);
}
