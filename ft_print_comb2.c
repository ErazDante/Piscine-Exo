
void ft_putchar(char character);
void print_Nbr(char unit_r, char dec_r, char unit_l, char dec_l);
void right_Nbr(char unit_l, char dec_l);

void ft_print_comb2(void)
{
	char unit_l;
	char dec_l;
	dec_l = '0';
	unit_l = '0';

	while(dec_l <= '9')
	{
		while(unit_l <= '9')
		{
			right_Nbr(unit_l, dec_l);
			++unit_l;
		}
		unit_l = '0';
		++dec_l;
	}
}

void print_Nbr(char unit_r, char dec_r, char unit_l, char dec_l)
{
	ft_putchar(dec_l);
	ft_putchar(unit_l);
	ft_putchar(' ');
	ft_putchar(dec_r);
	ft_putchar(unit_r);
	ft_putchar(',');
	ft_putchar(' ');
}

void right_Nbr(char unit_l, char dec_l)
{
	char unit_r; 
	char dec_r; 

	dec_r = dec_l;
	unit_r = unit_l + 1;

	while(dec_r <= '9')
	{
		while(unit_r <= '9')
		{
			print_Nbr(unit_r, dec_r, unit_l, dec_l);
			++unit_r;
		}
		unit_r = '0';
		++dec_r;
	}
}