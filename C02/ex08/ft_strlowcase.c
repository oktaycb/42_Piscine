/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocubukcu <ocubukcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 21:57:58 by ocubukcu          #+#    #+#             */
/*   Updated: 2024/02/10 16:32:23 by ocubukcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (i[str])
	{
		if (i[str] >= 'A' && i[str] <= 'Z')
		{
			i[str] += 32;
		}
		i++;
	}
	return (str);
}
