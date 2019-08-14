
void ft_putchar(char character);

void ft_print_numbers(void)
{
	char digits;
	digits = '0';

	while(digits <= '9')
	{
		ft_putchar(digits);
		++digits;
	}
}