
void ft_putchar(char character);

void ft_print_alphabet(void)
{
	char letter;
	letter = 'a';

	while(letter <= 'z')
	{
		ft_putchar(letter);
		++letter;
	}
}