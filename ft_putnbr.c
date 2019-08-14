
void ft_putchar(char character);

int reverse_Num(int Nbr)
{
	int new_Nbr;
	new_Nbr = 0;

	while(Nbr)
	{
		new_Nbr *= 10;
		new_Nbr += Nbr % 10;
		Nbr /= 10;
	}

	return new_Nbr;
}

void ft_putnbr(int nb)
{
	char temp;

	nb = reverse_Num(nb);

	while(nb)
	{
		temp = nb % 10;
		ft_putchar(temp + 48);
		nb /= 10;
	}
}