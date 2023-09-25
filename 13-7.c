#include <stdio.h>

void main()
{
	union student {
		int tot;
		char grade;
	};

	union student u;

	u.tot = 300;
	u.grade = 'A';

	printf("\n--- 공용체 활용 ---\n");
	printf("총점 ==> %d\n", u.tot);
	printf("등급 ==> %c\n", u.grade);
}
