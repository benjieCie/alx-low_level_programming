/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int space;
	int tow;
	int tri;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row <= (size - 1); row++)
		{
			for (space = 0; space < (size - 1) - row; space++)
			{
				_putchar(' ');
			}
			for (tri = 0; tri <= row; tri++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
