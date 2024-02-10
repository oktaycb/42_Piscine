/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocubukcu <ocubukcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:27:24 by ocubukcu          #+#    #+#             */
/*   Updated: 2024/02/10 22:27:25 by ocubukcu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
    // Eğer nb 1'den küçükse, faktöriyel hesaplanamaz, bu yüzden 0 döndürülür.
    if (nb < 1)
        return 0;
    // Eğer nb 1'e eşitse, faktöriyel 1'dir, bu yüzden 1 döndürülür.
    else if (nb == 1)
        return 1;
    else
    {
        // nb'nin faktöriyelini hesaplamak için fonksiyon kendini tekrar çağırır ve nb'nin bir eksiğini parametre olarak alır.
        // Bu, faktöriyel hesaplamasının bir rekürsif (özyinelemeli) işlemidir.
        return (nb * ft_recursive_factorial(nb - 1));
    }
}
