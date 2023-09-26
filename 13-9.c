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
	
	printf("�Է��� �л� �� : ");
	scanf("%d", &size);

	// struct �� malloc �� �տ� (int*) �� ���� ���������� ������ ����! -> �ٿ��� �Ǵµ�?! ����..
	// �׸��� sizeof �ȿ� (struct ����ü�̸�) �ۼ����ֱ�!
	//p = malloc(sizeof(struct student) * size); // <- �� �ۼ� �ڵ�
	p = (struct student*)malloc(sizeof(struct student) * size); // <- ������� �ڵ�
	
	for (int i = 0; i < size; i++)
	{
		printf("�̸��� ���� �Է� : ");
		scanf("%s %d", (p+i)->name, &(p+i)->age);
	}


	printf("\n\n-- �л� ��� --\n");
	
	for (int i = 0; i < size; i++)
	{
		printf("�̸�:%s , ����:%d\n", (p+i)->name, (p+i)->age);
	}

	free(p);
}

// Q. p.name, p.age �� �� �ȵɱ�?
//
// . �� ����ü����.������� �������� ���δ�!
// . �� ������ p.name, p.age �� �ƴ϶� twice.name, twice.age ���� ��!
//
// -> �� �����ͺ���->������� �������� ���δ�!
// -> �� ������ twice->name, twice->age �� �ƴ϶� p->name, p->age ���� ��!
