/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocubukcu <ocubukcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:34:22 by ocubukcu          #+#    #+#             */
/*   Updated: 2024/02/10 21:34:23 by ocubukcu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
    int i;
    int	p;
	int	ne;

    i = 0;
	p = 1;
	ne = 0;
    
	while (i[str] == 32 || (i[str] >= 9 && i[str] <= 13))
		i++;
	while (i[str] == '-' || i[str] == '+')
	{
		p *= (i[str] == '-') * -1 + !(i[str] == '-');
		i++;
	}
	while (i[str] >= '0' && i[str] <= '9')
		ne = ne * 10 + i++[str] - 48;
	return (ne * p);
}

#include <stdio.h>

int main(void)
{
    printf("%d", ft_atoi("      +---+-5714532001"));
}
