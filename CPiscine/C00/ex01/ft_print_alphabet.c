/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 02:43:15 by alvinram          #+#    #+#             */
/*   Updated: 2024/07/16 17:40:29 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char c;
	c = 'a';

	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
	
}

int main ()
{
	ft_print_alphabet();
	return 0;
}
