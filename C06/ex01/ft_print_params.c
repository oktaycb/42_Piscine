/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocubukcu <ocubukcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:53:35 by ocubukcu          #+#    #+#             */
/*   Updated: 2024/02/11 00:20:07 by ocubukcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int p;

	p = 1; // Argümanların başlangıç indeksi 1'dir, çünkü 0'ıncı argüman programın adıdır ve bizi ilgilendirmez.
	while (p < argc) // p, komut satırı argümanlarının sayısından küçük olduğu sürece döngü devam eder.
	{
		i = 0; // i'yi sıfıra sıfırlarız.
		while (argv[p][i]) // p'inci argümanın i'nci karakteri null karakter olana kadar döngü devam eder.
		{
			write(1, &argv[p][i], 1); // Karakteri standart çıkışa yazdırırız.
			i++; // Sonraki karaktere geçmek için i'yi artırırız.
		}
		write(1, "\n", 1); // Her argümanın sonunda yeni bir satır ekleriz.
		p++; // Bir sonraki argümana geçmek için p'yi artırırız.
	}
}
