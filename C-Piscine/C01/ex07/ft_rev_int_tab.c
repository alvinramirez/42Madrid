/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:18:19 by alvinram          #+#    #+#             */
/*   Updated: 2024/07/25 02:29:46 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	temp;

	index = 0;
	while (index < size / 2)
	{
		temp = tab[index];
		tab[index] = tab[size - 1 - index];
		tab[size - 1 - index] = temp;
		index++;
	}
}
/*
void	print_array_content(int numbers[], int size)
{
	int index;

	printf("[ ");
	index = 0;
	while (index < size)
	{
		printf("%d", numbers[index]);
		if (index != size - 1)
		{
			printf(", ");
		}
		index++;
	}
	printf(" ]");
}

int		main(void)
{
	int numbers[20];
	int *first_pointer;
	int index;
	
	printf("Introduce 20 numeros enteros:\n");
	index = 0;
	while (index < 20)
	{	
		printf("Numero %d: ", index + 1);
		scanf("%d", &numbers[index]);
		index++;
	}
	first_pointer = &numbers[0];
	printf("Antes: ");
	print_array_content(numbers, 20);
	ft_rev_int_tab(first_pointer, 20);
	printf("\nDespues : ");
	print_array_content(numbers, 20);
}
*/
