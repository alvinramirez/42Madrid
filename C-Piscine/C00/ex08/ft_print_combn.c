/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:04:49 by alvinram          #+#    #+#             */
/*   Updated: 2024/07/18 17:15:40 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_combn(int n)
{
    int arr[10];
    int i;

    if (n <= 0 || n >= 10)
        return;

    i = -1;
    while (++i < n)
        arr[i] = i;

    while (1)
    {
        i = -1;
        while (++i < n)
            ft_putchar(arr[i] + '0');
        
        if (arr[0] == 10 - n)
            break;

        ft_putchar(',');
        ft_putchar(' ');

        i = n;
        while (--i >= 0)
        {
            if (arr[i] < 10 - n + i)
            {
                arr[i]++;
                while (++i < n)
                    arr[i] = arr[i - 1] + 1;
                break;
            }
        }
    }
}

int main(void)
{
    ft_print_combn(2);
    ft_putchar('\n');
    ft_print_combn(3);
    ft_putchar('\n');
    return 0;
}
