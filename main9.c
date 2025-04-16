#include <stdio.h>
// #define 단순한 치환
#define PI 3.141592
#define 출력 printf
// typedef - 자료형에 이름 붙이기
typedef unsigned int unit;
// typedef 실제자료형 별칭;
int main() {
	int arr[5] = { 1,2,3,4,5 };
	// arr = &arr[0]
	// 배열 포인터 : 배열 전체를 가리키는 포인터, 배열하나의 주소를 저장
	int* p = arr; // int 하나를 가리킴
	printf("%d\n", *p);
	int (*pp)[5] = &arr; // int 5개짜리 배열 하나를 가리킴 
	printf("%d\n", (*pp)[0]); // 1
	// pp == &arr
	int* p2[5]; // 포인터 5개짜리 배열	
	// 포인터 배열 : 주소를 여러개 담는 배열
	int* a[3];
	// int형 변수 3개의 주소를 저장하는 포인터 배열
	// 1. int형 변수 3개 만들기
	int x = 10;
	int y = 20;
	int z = 30;
	// 2. 주소 3개를 저장하는 배열 만들기
	int* arr2[3];
	// 3. 각각의 포인터에 주소 저장
	arr2[0] = &x;
	arr2[1] = &y;
	arr2[2] = &z;
	// 4. 반복문을 이용해서 출력
	for (int i = 0; i < 3; i++) {
		printf("%d\n", *arr2[i]);
	}
	출력("%f\n", PI);
	unit i = 5;
	char c = 'a' // 작은따옴표 => 문자 1개
	char* s = "apple\0"; // 큰따옴표 => 문자열
	// c언어에서 문자열은 \0(널문자)로 끝나야 한다
	char name[5];
	name[0] = 'j';
	name[1] = 'e';
	name[2] = 'o';
	name[3] = 'n';
	name[4] = '\0';
	printf("%s", s);
	printf("%s", name);

	char name2[] = "hello"; // 컴파일러가 자동으로 마지막에 널문자를 넣어줍니다.


	return 0;
}
