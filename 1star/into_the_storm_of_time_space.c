#include <stdio.h>

int	main()
{
	int	selected_arr[4] = {0, };
	int	arr[5] = {0, };
	int	i, j = 0;
	int	counts = 5;

	for (i = 0; i < 4; i++)
		scanf("%d", &selected_arr[i]);
	for (i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
			if (selected_arr[i] == arr[j])
				counts--;
	}
	printf("%d",counts);
	return (0);
}
