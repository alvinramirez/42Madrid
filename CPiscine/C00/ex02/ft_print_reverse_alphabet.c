/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 02:45:49 by alvinram          #+#    #+#             */
/*   Updated: 2024/07/16 17:38:51 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

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
