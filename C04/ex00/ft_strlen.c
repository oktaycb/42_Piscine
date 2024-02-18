/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocubukcu <ocubukcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:33:46 by ocubukcu          #+#    #+#             */
/*   Updated: 2024/02/11 19:50:02 by ocubukcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i = 0;
	while (i[str])
		i++;

	return i;
}

#include <stdio.h>
int main()
{
	printf("%d", ft_strlen("asdafg"));
	
}