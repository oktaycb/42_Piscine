/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocubukcu <ocubukcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:20:44 by ocubukcu          #+#    #+#             */
/*   Updated: 2024/02/06 15:30:25 by ocubukcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find) {
    int i;
    int f;

    if (to_find[0] == '\0')
        return str;

    i = 0;
    while (str[i]) {
        f = 0;

        while (str[i + f] == to_find[f] && str[i + f])
            f++;

        if (to_find[f] == '\0')
            return &str[i];

        i++;
    }
    return (0);
}
