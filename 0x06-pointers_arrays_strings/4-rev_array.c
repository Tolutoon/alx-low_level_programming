#include "main.h"

/**
 * reverse_array - reverses the content of an
 *                 array based on n integars
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: Nothing.
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i;
	int j;

	i = 0;
	j = n - 1;

	/**
	 * put the value of content in array a
	 * in temp
	 * then place the last item in array
	 * in the first place then place
	 * value in temp to begin with the last
	 */

	for (; i < n - 1; i++)
	{
		for (; i < n - 1; j--)
		{
			a[i] = a[j];
			a[j] = temp;
		}
	}
}
