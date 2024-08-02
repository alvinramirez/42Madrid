/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinramirez <alvinramirez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 02:45:49 by alvinram          #+#    #+#             */
/*   Updated: 2024/08/03 01:18:21 by alvinramire      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char c;
	c = 'z';
	
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
	
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
