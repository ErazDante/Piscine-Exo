
void ft_putchar(char character);
void print_Nbr(char unit, char dec, char cent);

void ft_print_comb(void)
{
	char unit; 
	char dec; 
	char cent;

	cent = '0';
	dec = '1';
	unit = '2';

	while(cent <= '7')
	{
		dec = cent + 1;
		while(dec <= '8')
		{
			unit = dec + 1;
			while(unit <= '9')
			{
				print_Nbr(unit, dec, cent);
				++unit;
			}
			++dec;
		}
		++cent;
	}
}

void print_Nbr(char unit, char dec, char cent)
{
	ft_putchar(cent);
	ft_putchar(dec);
	ft_putchar(unit);
	ft_putchar(';');
	ft_putchar(' ');
}
