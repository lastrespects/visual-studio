#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct Person {
	char* name; // 문자열
	int age;	 // 정수
	float height; // 실수
}Person;
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
	
	struct Person p1;
	Person p2;
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




	return 0;
}