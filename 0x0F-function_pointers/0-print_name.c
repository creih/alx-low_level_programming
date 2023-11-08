/**
 * print_name - decides wether to print uppercase or as_is
 * @name: points to name
 * @f: points to chosen function
 * Return: NULL
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		(*f)(name);
}
