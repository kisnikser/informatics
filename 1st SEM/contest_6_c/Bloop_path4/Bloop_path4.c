#include <stdio.h>

int nextStep(int step, int k)
{
	step -= k;
	if (step < 0)
	{
		step = 0;
	}
	return step;
}

int main()
{
	int L, k;
	scanf("%d%d", &L, &k);
	int step = L;
	int path = 0;
	int i = 0;
	while (step > 0)
	{
		path += step;
		step = nextStep(step, k);
		i += 1;
	}
	printf("%d\n", path);
	printf("%d", i);
	return 0;
}
