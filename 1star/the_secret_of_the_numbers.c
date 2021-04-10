#include <stdio.h>

int	main()
{
	unsigned long int	num = 0;

	scanf("%ld", &num);

	while (num % 2 == 0)
		num /= 2;
	if (num == 1)
	{
		printf("Yes");
		return (0);
	}
	else
	{
		printf("No");
		return (0);
	}
}
