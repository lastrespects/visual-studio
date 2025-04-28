#include <stdio.h>
#include <string.h>
// ����ü : �������� �ٸ� �����͸� �ϳ��� ��� ������ �� �ִ� ������ �ٷ���
// �ڱ���������ü : ����ü �ȿ� �ڱ� �ڽ��� �����͸� ����� ���� ����ü
struct Node {
	int data;
	struct Node* next; // �ڱ� �ڽ��� ����Ű�� ***������***
};
struct Book {
	char* title;
	int* year;
	struct Book* next; // ����å�� ����ų ������(�ڱ�����)
};
int main() {
	struct Node n1 = { 10, NULL };
	struct Node n2 = { 20, NULL }; 

	n1.next = &n2; // n1�� ���� ����� n2�� ����Ű�� ��

	struct Book b1 = ("C���", 2020, NULL);
	struct Book b2 = ("C���2", 2021, NULL);
	struct Book b3 = ("C���3", 2022, NULL);
	b1.next = &b2;
	b2.next = &b3;
	struct Book* p = &b1;
	while (p != NULL) {
		printf("%s\n", p->title);
		printf("%d\n", p->year);
		p = p->next; //���� å���� �̵�
	}



	return 0;
}