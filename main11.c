#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//구조체 : 여러개의 다른 데이터를 하나로 묶어서 관리할 수 있는 데이터 꾸러미
typedef struct Person {
	char* name[10]; // 문자열
	int age;	 // 정수
	float height; // 실수
}Person;

struct Address {
	char* city; // 도시
	int num; // 우편번호
};

struct Student {
	char* name;
	int age;
	struct Address addr;
};

int main() {
	//strcpy(대상, 원본); // 문자열을 복사할때 사용
	//char src[] = "apple";
	//char dest[6];
	//strcpy(dest, src);
	//strncpy(대상, 원본, 복사할최대글자수); //원본 문자열의 앞에서부터 최대n글자까지 복사
	//// => \0널문자가 자동으로 붙지 않을수도 있음
	//char src1[] = "apple";
	//char dest1[10];
	//strncpy(dest1, src1, 5);
	//dest1[5] = '\0';
	// strcmp(a,b) // 전체가 똑같은지 확인하고 싶을때
	// strncmp(a,b,n) // 일부분만 비교하고 싶을때

	//int a = 20;
	//char* name; //이름 // 문자열
	//int age;	//나이 // 정수
	//float height; // 키 // 실수

	//struct 사람 {
	//	이름;
	//	나이;
	//	키;
	//};
	
	struct Person p1; // .연산자를 이용해 멤버변수에 접근
	// p1.name = "홍길동";
	strcpy(p1.name, "홍길동");
	Person p2;
	char a = 10;
	char* p = &a;
	// 구조체 + 포인터
	p1.name = "전혜성";
	p1.age = 28;
	p1.height = 170.3;
	printf("%s\n", p1.name);
	printf("%d\n", p1.age);
	printf("%.1f\n", p1.height);

	// #include <stdbool.h>
	// #define true 1
	// #define false 0
	// #define bool_Bool

	struct Student s = {"홍길동", 20};
	s.name = "홍길동";
	s.age = 20;
	s.addr.city = "서울";
	s.addr.num = 1234;
	printf("%s\n", s.addr.city);
	struct Student* ps = &s;
	printf("%d\n", (*ps).age);
	printf("%d\n", ps->age);
	// -> 연산자 왼쪽은 무조건 구조체 주소
	



	return 0;
}