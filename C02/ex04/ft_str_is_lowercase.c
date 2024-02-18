/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocubukcu <ocubukcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 21:56:55 by ocubukcu          #+#    #+#             */
/*   Updated: 2024/02/10 16:32:23 by ocubukcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (i[str])
	{
		if (!(i[str] >= 'a' && i[str] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
