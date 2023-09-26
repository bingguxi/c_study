#include <stdio.h>
#include <malloc.h>

void main()
{
	int size;
	struct student
	{
		char name[10];
		int age;
	};

	struct student twice;
	struct student *p;
	
	p = &twice;
	
	printf("입력할 학생 수 : ");
	scanf("%d", &size);

	// struct 의 malloc 은 앞에 (int*) 과 같은 데이터형식 붙이지 않음! -> 붙여도 되는데?! 뭐야..
	// 그리고 sizeof 안에 (struct 구조체이름) 작성해주기!
	//p = malloc(sizeof(struct student) * size); // <- 내 작성 코드
	p = (struct student*)malloc(sizeof(struct student) * size); // <- 유진언니 코드
	
	for (int i = 0; i < size; i++)
	{
		printf("이름과 나이 입력 : ");
		scanf("%s %d", (p+i)->name, &(p+i)->age);
	}


	printf("\n\n-- 학생 명단 --\n");
	
	for (int i = 0; i < size; i++)
	{
		printf("이름:%s , 나이:%d\n", (p+i)->name, (p+i)->age);
	}

	free(p);
}

// Q. p.name, p.age 는 왜 안될까?
//
// . 은 구조체변수.멤버변수 형식으로 쓰인다!
// . 을 쓰려면 p.name, p.age 가 아니라 twice.name, twice.age 여야 함!
//
// -> 은 포인터변수->멤버변수 형식으로 쓰인다!
// -> 을 쓰려면 twice->name, twice->age 가 아니라 p->name, p->age 여야 함!
