/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:30:55 by alvinram          #+#    #+#             */
/*   Updated: 2024/07/24 17:18:07 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	result;

	div = *a / *b;
	result = *a % *b;
	*a = div;
	*b = result;
}
/*
int main()
{
	ft_ultimate_div_mod();
}
*/
