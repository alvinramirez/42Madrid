/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:29:03 by alvinram          #+#    #+#             */
/*   Updated: 2024/07/18 17:51:04 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void ft_putnbr(int n)
{
    if (n == -2147483648) // Manejo especial para el menor entero posible en C
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (n < 0) // Manejo de números negativos
    {
        write(1, "-", 1);
        n = -n;
    }
    if (n >= 10) // Caso recursivo
    {
        ft_putnbr(n / 10);
    }
    char c = (n % 10) + '0';
    write(1, &c, 1); // Caso base
}

int main(void)
{
    int x = 42;
    int y = -7;
    
    write(1, "Antes del intercambio:\nx = ", 27);
    ft_putnbr(x);
    write(1, "\ny = ", 5);
    ft_putnbr(y);
    write(1, "\n", 1);

    ft_swap(&x, &y);

    write(1, "Después del intercambio:\nx = ", 29);
    ft_putnbr(x);
    write(1, "\ny = ", 5);
    ft_putnbr(y);
    write(1, "\n", 1);

    return 0;
}
