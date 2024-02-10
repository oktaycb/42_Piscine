/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocubukcu <ocubukcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:50:25 by ocubukcu          #+#    #+#             */
/*   Updated: 2024/02/11 00:20:41 by ocubukcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i;

	i = 0;
	while (av[0][i]) // Programın adının i'nci karakteri null karakter olana kadar döngü devam eder.
	{
		write(1, &av[0][i], 1); // Karakteri standart çıkışa yazdırırız.
		i++; // Sonraki karaktere geçmek için i'yi artırırız.
	}
	write(1, "\n", 1); // Program adının sonunda yeni bir satır ekleriz.
}
