#include <stdio.h>

void main()
{
	int a = 10;

	a++;
	printf (" a ++ ==> %d \n", a);

	a--;
	printf (" a -- ==> %d \n", a);
	
	a += 5;
	printf (" a += 5 ==> %d \n", a);
	
	a -= 5;
	printf (" a -= 5 ==> %d \n", a);

	a *= 5;
	printf (" a *= 5 ==> %d \n", a);
	
	a /= 5;
	printf (" a /= 5 ==> %d \n", a);

	a %= 5;
	printf (" a %%= 5 ==> %d \n", a);
}
