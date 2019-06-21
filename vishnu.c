#include <stdio.h>

int main()
{
	int n;
	int sum = 0;
	printf("Enter the numbers to get sum : ");
	scanf("%d", &n);
	int a[n];
	for (int i=0;i<n ; i++)
		scanf("%d", &a[i]);
	for (int i=0; i<n; i++)
		sum += a[i];
		printf("%d", sum);
}
