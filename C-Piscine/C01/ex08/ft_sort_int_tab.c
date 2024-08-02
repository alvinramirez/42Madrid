/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:19:01 by alvinram          #+#    #+#             */
/*   Updated: 2024/07/25 02:14:05 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		read_index;
	int		index;
	int		validate;

	validate = 0;
	read_index = 0;
	while (validate == 1)
	{
		validate = 0;
		index = 0;
		while (index < size)
		{
			if (tab[index] > tab[index + 1])
			{
				ft_swap(&tab[index], &tab[index + 1]);
				validate = 1;
			}
			index++;
		}
		if (!validate)
		{
			break ;
		}
		read_index++;
	}
}
/*
int main()
{
	ft_sort_int_tab();
	return 0;
}
*/
