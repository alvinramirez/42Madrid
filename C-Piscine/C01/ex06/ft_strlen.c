/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:17:26 by alvinram          #+#    #+#             */
/*   Updated: 2024/07/25 02:24:25 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int		num;

	num = 0;
	while (str[num])
	{
		num++;
	}
	return (num);
}
/*
int	main(void)
{
	char	str[5];
	int	size;

	printf("Introduce una cadena de caracteres: ");
	scanf("%4s", str);
	size = ft_strlen(str);
	printf("La longitud de la cadena es: %d\n", size);
	return (0);
}
*/
