
/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 * integers with each element initalized to 0
 * @width: The width of the 2-dimensional array
 * @height: The height of the 2-dimensional array
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 * Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **chi;
	int hgt_ind, wid_ind;
	if (width <= 0 || height <= 0)
		return (NULL);
	chi = malloc(sizeof(int *) * height);
	if (chi == NULL)
		return (NULL);
	for (hgt_ind = 0; hgt_ind < height; hgt_ind++)
	{
		chi[hgt_ind] = malloc(sizeof(int) * width);
		if (chi[hgt_ind] == NULL)
		{
			for (; hgt_ind >= 0; hgt_ind--)
				free(chi[hgt_ind]);
			free(chi);
			return (NULL);
		}
	}
	for (hgt_ind = 0; hgt_ind < height; hgt_ind++)
	{
		for (wid_ind = 0; wid_ind < width; wid_ind++)
			chi[hgt_ind][wid_ind] = 0;
	}

	return (twoD);
	return (chi);
}
