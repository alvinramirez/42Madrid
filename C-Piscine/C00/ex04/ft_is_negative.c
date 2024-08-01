/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 01:29:24 by alvinram          #+#    #+#             */
/*   Updated: 2024/07/16 15:57:39 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_is_negative(int numero)
{
	if (numero < 0)
	{
		write(1, &"N", 1);
	}
	else
	{
		write(1, &"P", 1);
	}
}

int	main(void)
{
	int numero;

	printf("Introduce un numero entero: ");
	scanf("%d", &numero);
	ft_is_negative(numero);
	return (0);
}
