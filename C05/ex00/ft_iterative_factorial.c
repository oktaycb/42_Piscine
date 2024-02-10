/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocubukcu <ocubukcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:26:52 by ocubukcu          #+#    #+#             */
/*   Updated: 2024/02/10 22:26:53 by ocubukcu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int i;

    // Eğer nb 1'den küçükse, faktöriyel hesaplanamaz, bu yüzden 0 döndürülür.
    if (nb < 1)
        return (0);
    
    // Faktöriyel hesabı için bir döngü başlatılır.
    // İlk olarak, bir sayacı (i) nb'ye eşitlenir.
    i = nb;
    
    // Döngü, sayacı 1'e kadar azaltarak çalışır.
    while (i > 1)
    {
        // Her adımda, nb değeri, (i - 1) ile çarpılarak güncellenir.
        nb = nb * (i - 1);
        // Sayac (i) bir azaltılarak, bir sonraki adıma geçilir.
        i--;
    }
    
    // Döngü bittiğinde, nb'nin değeri faktöriyeli temsil eder ve bu değer döndürülür.
    return (nb);
}
