#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_alphabet(void)
{
	char c;
	
	ft_putchar('a');
	ft_putchar('b');
	ft_putchar('c');
	ft_putchar('d');
	ft_putchar('e');
	ft_putchar('f');
	ft_putchar('g');
	ft_putchar('h');
	ft_putchar('i');
	ft_putchar('j');
	ft_putchar('k');
	ft_putchar('l');
	ft_putchar('m');
	ft_putchar('n');
	ft_putchar('o');
	ft_putchar('p');
	ft_putchar('q');
	ft_putchar('r');
	ft_putchar('s');
	ft_putchar('t');
	ft_putchar('u');
	ft_putchar('v');
	ft_putchar('w');
	ft_putchar('x');
	ft_putchar('y');
	ft_putchar('z');
}
