/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocubukcu <ocubukcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:28:17 by ocubukcu          #+#    #+#             */
/*   Updated: 2024/02/10 22:28:45 by ocubukcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Fonksiyonun amacını ve giriş-çıkışları belirtelim.
// Parametre: nb - kontrol edilecek sayı
// Dönüş: 1 - nb asal ise, 0 - nb asal değil ise veya nb <= 1 ise
int ft_is_prime(int nb)
{
    int i;      // Sayıyı bölecek olan bölen
    int prime;  // Asallığı kontrol etmek için kullanılacak sayaç

    i = 2;      // İlk bölen 2'den başlar
    prime = 0;  // Asal olup olmadığını belirlemek için sayaç

    // nb 2'den küçükse kesinlikle asal değildir, bu yüzden 0 döndürülür
    if (nb < 2)
        return (0);

    // nb, 2'ye eşitse, asal olduğu kabul edilir, bu yüzden 1 döndürülür
    if (nb == i)
        return (1);

    // i, nb'nin yarısına kadar olan tüm olası bölenleri kontrol eder
    while (i <= nb / 2)
    {
        // Eğer nb, i'ye tam bölünüyorsa, nb asal değildir, prime sayaç artırılır
        if (nb % i == 0)
            prime++;

        i++; // Bir sonraki böleni kontrol etmek için i artırılır
    }

    // prime sayacı 0 ise, nb'nin asal olduğu anlamına gelir, 1 döndürülür
    if (prime == 0)
        return (1);
    else
        return (0); // prime sayacı 0'dan farklı ise, nb asal değildir, 0 döndürülür
}
