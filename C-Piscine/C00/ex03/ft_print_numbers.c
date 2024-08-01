/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 01:33:29 by alvinram          #+#    #+#             */
/*   Updated: 2024/07/16 17:47:49 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char c;
	c = '0';

	while (c <= '9')
	{
		write(1, &c, 1);
		c++;
	}
	
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
