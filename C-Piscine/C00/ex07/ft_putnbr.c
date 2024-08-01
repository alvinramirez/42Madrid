/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:03:04 by alvinram          #+#    #+#             */
/*   Updated: 2024/07/18 17:03:14 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648) // Manejo especial para el menor entero posible en C
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (nb < 0) // Manejo de números negativos
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb >= 10) // Caso recursivo
    {
        ft_putnbr(nb / 10);
    }
    ft_putchar((nb % 10) + '0'); // Caso base
}

int main(void)
{
    ft_putnbr(42);
    ft_putchar('\n');
    ft_putnbr(-1234);
    ft_putchar('\n');
    ft_putnbr(0);
    ft_putchar('\n');
    ft_putnbr(2147483647);
    ft_putchar('\n');
    ft_putnbr(-2147483648);
    ft_putchar('\n');
    return 0;
}

