/**
 * int_index - decides from result from comparison
 * @array:  array to check from
 * @size: of the array
 * @cmp: func pointer
 * Return: -1 or i
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || size <= 0 || !cmp)
	{
		return (-1);
	}
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
