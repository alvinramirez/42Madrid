/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:26:21 by alvinram          #+#    #+#             */
/*   Updated: 2024/07/18 15:28:13 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_str_is_alpha(char *str)
{
	int	index;
	bool	valid;
	char	curr;

	index = 0;
	valid = true;
	while (true)
	{
		curr = str[index];
		if (curr == '\0')
		{
			break ;
		}
		if (!((curr >= 'A' && curr <= 'Z') || (curr >= 'a' && curr <= 'z')))
		{
			valid = false;
			break ;
		}
		index++;
	}
	return (valid);
}
