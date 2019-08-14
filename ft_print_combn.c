
void ft_putchar(char character);
void set_fill_Array(int n_digit, char Array[]);
void mov_Array(char Array[], int n_digit);
void print_Array(int n_digit, char Array[]);

void ft_print_combn(int n)
{
	char digit[9];
	set_fill_Array(n, digit);
	mov_Array(digit, n);

}

void set_fill_Array(int n_digit, char Array[])
{
	int count;
	count = 0;

	while(count < 9)
	{
		Array[count++] = '0';
	}
	count = 1;
	while(count < n_digit)
	{
		Array[count] = count + 48;
		++count;
	}
}

void mov_Array(char Array[], int n_digit)
{
	int index;
	index = n_digit - 1;
	char max_value;
	max_value = (('9' - n_digit) + (index + 1));

	while(index >= 0)
	{
		while(Array[index] <= max_value)
		{
			print_Array(n_digit, Array);
			++Array[index];
		}
		--index;
		++Array[index++];
	}
	
}

void print_Array(int n_digit, char Array[])
{
	int count;
	count = 0;

	while(count < n_digit)
	{
		ft_putchar(Array[count++]);
	}
	ft_putchar('\n');
}
