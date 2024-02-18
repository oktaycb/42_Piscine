/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocubukcu <ocubukcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:20:44 by ocubukcu          #+#    #+#             */
/*   Updated: 2024/02/10 16:32:23 by ocubukcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find) {
    int i;
    int f;

    if (to_find[0] == '\0')
        return str;

    i = 0;
    while (i[str]) {
        f = 0;

        while (str[i + f] == to_find[f] && str[i + f])
            f++;

        if (to_find[f] == '\0')
            return &i[str];

        i++;
    }
    return (0);
}
