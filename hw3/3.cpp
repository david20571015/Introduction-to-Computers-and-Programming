#include <stdio.h>

int main(void)
{
	int a_sum, a_product, b_sum, b_product, a = 0, b = 0;
	int an[6], x;

	printf("x = ");
	scanf("%d", &x);

	for (int i = 0; i < 6; i++)
	{
		printf("a%d= ", i);
		scanf("%d", &an[i]);
	}

	int k = 1;
	for (int i = 0; i < 6; i++)
	{
		a += an[i] * k;
		k *= x;
		a_sum += (an[i] != 0) ? 1 : 0;
		a_product += (an[i] != 0) ? i : 0;
	}
	printf("\n(a)%d\n* : %d\n+ : %d\n", a, a_sum, a_product);

	k = 1;
	b = an[5];
	for (int i = 5; i > 0; i--)
	{
		b = b * x + an[i - 1];
		b_sum += (an[i - 1] != 0) ? 1 : 0;
		b_product += 1;
	}
	printf("\n(b)%d\n* : %d\n+ : %d\n", b, b_sum, b_product);

	return 0;
}
