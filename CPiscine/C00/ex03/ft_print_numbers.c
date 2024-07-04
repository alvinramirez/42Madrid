#include <unistd.h>

void ft_print_numbers(void)
{
	write(0, "0123456789", 10);
}

int main()
{
	ft_print_numbers();
	return 0;
}

