/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocubukcu <ocubukcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:59:04 by ocubukcu          #+#    #+#             */
/*   Updated: 2024/02/10 22:10:11 by ocubukcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_iterative_power(int nb, int power)
{
    int result;

    // Sonucu başlatmak için nb'yi kullanıyoruz.
    result = nb;
    
    // Eğer üs negatifse, negatif üsler hesaplanamaz, bu yüzden 0 döndürüyoruz.
    if (power < 0)
        return (0);
    
    // Eğer üs 0 ise, her sayının 0. üssü 1 olduğu için 1 döndürüyoruz.
    if (power == 0)
        return (1);

    // Üs 1'den büyükse, üssü iteratif olarak hesaplıyoruz.
    while (power > 1)
    {
        result *= nb; // Sonucu nb ile çarpıyoruz.
        power--; // Üssü azaltıyoruz.
    }

    // Hesaplanan sonucu döndürüyoruz.
    return (result);
}
