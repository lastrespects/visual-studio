#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//����ü : �������� �ٸ� �����͸� �ϳ��� ��� ������ �� �ִ� ������ �ٷ���
typedef struct Person {
	char* name[10]; // ���ڿ�
	int age;	 // ����
	float height; // �Ǽ�
}Person;

struct Address {
	char* city; // ����
	int num; // �����ȣ
};

struct Student {
	char* name;
	int age;
	struct Address addr;
};

int main() {
	//strcpy(���, ����); // ���ڿ��� �����Ҷ� ���
	//char src[] = "apple";
	//char dest[6];
	//strcpy(dest, src);
	//strncpy(���, ����, �������ִ���ڼ�); //���� ���ڿ��� �տ������� �ִ�n���ڱ��� ����
	//// => \0�ι��ڰ� �ڵ����� ���� �������� ����
	//char src1[] = "apple";
	//char dest1[10];
	//strncpy(dest1, src1, 5);
	//dest1[5] = '\0';
	// strcmp(a,b) // ��ü�� �Ȱ����� Ȯ���ϰ� ������
	// strncmp(a,b,n) // �Ϻκи� ���ϰ� ������

	//int a = 20;
	//char* name; //�̸� // ���ڿ�
	//int age;	//���� // ����
	//float height; // Ű // �Ǽ�

	//struct ��� {
	//	�̸�;
	//	����;
	//	Ű;
	//};
	
	struct Person p1; // .�����ڸ� �̿��� ��������� ����
	// p1.name = "ȫ�浿";
	strcpy(p1.name, "ȫ�浿");
	Person p2;
	char a = 10;
	char* p = &a;
	// ����ü + ������
	p1.name = "������";
	p1.age = 28;
	p1.height = 170.3;
	printf("%s\n", p1.name);
	printf("%d\n", p1.age);
	printf("%.1f\n", p1.height);

	// #include <stdbool.h>
	// #define true 1
	// #define false 0
	// #define bool_Bool

	struct Student s = {"ȫ�浿", 20};
	s.name = "ȫ�浿";
	s.age = 20;
	s.addr.city = "����";
	s.addr.num = 1234;
	printf("%s\n", s.addr.city);
	struct Student* ps = &s;
	printf("%d\n", (*ps).age);
	printf("%d\n", ps->age);
	// -> ������ ������ ������ ����ü �ּ�
	



	return 0;
}