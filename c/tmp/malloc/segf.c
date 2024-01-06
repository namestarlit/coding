/**
 * segf - Let's segfault \o/
 */
void segf(void)
{
	char *str;

	str = "Holberton";
	str[0] = 'S';
}

/**
 * main - concept introduction
 *
 * Return: 0 (success)
 */
int main(void)
{
	segf();

	return (0);
}
