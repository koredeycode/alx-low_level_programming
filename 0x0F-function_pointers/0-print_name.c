/**
 * print_name - print a name according to a function input
 * @name: name to be inputted
 * @f: pointer to a function
 */
void print_name(char *name, void(*f)(char *))
{
	if (name && f)
		f(name);
}
