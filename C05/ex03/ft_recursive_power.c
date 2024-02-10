/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocubukcu <ocubukcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:27:48 by ocubukcu          #+#    #+#             */
/*   Updated: 2024/02/10 22:27:50 by ocubukcu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_recursive_power(int nb, int power)
{
    int result;

    // Geçici olarak sonucu nb olarak başlatıyoruz.
    result = nb;
    
    // Eğer üs 1'den büyükse, rekürsif olarak üssü hesaplıyoruz.
    if (power > 1)
        return (result * ft_recursive_power(result, power - 1));
    
    // Eğer üs 0 ise, her sayının 0. üssü 1 olduğu için 1 döndürüyoruz.
    else if (power == 0)
        return (1);
    
    // Eğer üs negatifse, negatif üsler hesaplanamaz, bu yüzden 0 döndürüyoruz.
    else if (power < 0)
        return (0);
    
    // Yukarıdaki koşulların hiçbiri sağlanmazsa, sonucu döndürüyoruz.
    else
        return (result);
}
