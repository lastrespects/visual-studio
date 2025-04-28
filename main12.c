#include <stdio.h>
#include <string.h>
// 구조체 : 여러개의 다른 데이터를 하나로 묶어서 관리할 수 있는 데이터 꾸러미
// 자기참조구조체 : 구조체 안에 자기 자신의 포인터를 멤버로 갖는 구조체
struct Node {
	int data;
	struct Node* next; // 자기 자신을 가리키는 ***포인터***
};
struct Book {
	char* title;
	int* year;
	struct Book* next; // 다음책을 가리킬 포인터(자기참조)
};
int main() {
	struct Node n1 = { 10, NULL };
	struct Node n2 = { 20, NULL }; 

	n1.next = &n2; // n1이 다음 노드인 n2를 가리키게 함

	struct Book b1 = ("C언어", 2020, NULL);
	struct Book b2 = ("C언어2", 2021, NULL);
	struct Book b3 = ("C언어3", 2022, NULL);
	b1.next = &b2;
	b2.next = &b3;
	struct Book* p = &b1;
	while (p != NULL) {
		printf("%s\n", p->title);
		printf("%d\n", p->year);
		p = p->next; //다음 책으로 이동
	}



	return 0;
}