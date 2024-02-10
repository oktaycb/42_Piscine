/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocubukcu <ocubukcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:57:24 by ocubukcu          #+#    #+#             */
/*   Updated: 2024/02/11 00:19:24 by ocubukcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	j = argc - 1; // j'yi komut satırı argümanlarının sayısının bir eksiği olarak başlatırız.
	while (j > 0) // j sıfırdan büyük olduğu sürece döngü devam eder.
	{
		i = 0; // i'yi sıfıra sıfırlarız.
		while (argv[j][i] != '\0') // j'inci argümanın i'nci karakteri null karakter olana kadar döngü devam eder.
		{
			write(1, &argv[j][i], 1); // Karakteri standart çıkışa yazdırırız.
			i++; // Sonraki karaktere geçmek için i'yi artırırız.
		}
		write(1, "\n", 1); // Her argümanın sonunda yeni bir satır ekleriz.
		j--; // Bir önceki argümana geçmek için j'yi azaltırız.
	}
	return (0); // Programın başarıyla tamamlandığını belirtiriz.
}