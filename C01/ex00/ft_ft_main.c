#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int *nbr;
	int number;

	number = 55;

	nbr = &number;

	ft_ft(nbr);

	printf("%d", number);

}