#include <stdio.h>
int main() {
	// 배열 : 같은 자료형의 값들을 연속된 메모리 공간에 저장하는 방법
	//
	// 배열선언
	// 자료형 배열명[갯수];
	// 원본데이터자료형*변수명;
	// int* p;
	// p = &b;
	// list = &b; X
	// int list[5];
	// int* list = &list[0];
	// printf("%d\n", *&list[0])
	// int* p = &a;
	// printf("%d\n",*p);
	// char name[10];
	// float f[3];
	// int a;
	// int b = 3;
	// a = 5;
	// 
	// printf("%d",a);
	// 배열방식
	// 
	// printf("%d",list[0]);
	// printf("%d", *&list[0])
	// 포인터 방식
	// 
	// list[0] = 5;
	// list[3] = 10;
	// 배열명[인덱스 번호]
	// 인덱스 번호는 0부터 시작!!
	// 자료형 배열명[갯수] = {값,값,값,---};
	// int l[3] = {10,20,30};
	// 3칸짜리 배열을 만들어 값을 넣음
	// int l[] = {10,20,30};
	// 크기를 생략하여 자동으로 초기화된 값만큼 3칸 생성
	// 
	// 배열을 만들면 배열명으로 포인터 변수가 생성된다고 생각하면 된다.
	// int list[5];
	// 정수를 담을수있는 공간 5개와 아래와 같은 배열명과 동일한 포인터 변수가 생성되어 배열의 첫번째 요소 주소를 담고있다.
	// int* list = &list[0];
	// list == &list[0]
	// 배열명 == 배열의 첫번째 요소 주소
	// list[0] == *(list+0)
	
	int x = 10; // 돈
	int* p = &x; // 돈이든 봉투의 주소 쪽지 // 1차포인터
	int** pp = &p; // 다중포인터. 그 쪽지(p)를 가리키는 또 다른 쪽지 // 2차포인터, 다중포인터
	int*** ppp = &pp; // 그 쪽찌(pp)를 가리키는 또 다른 쪽지 // 3차 포인터
	printf("x : %d\n", x); // 10
	printf("*p : %d\n", *p); //10
	printf("**pp : %d\n", *pp); // &x == p
	printf("**pp : %d\n", **pp); // 10  
	printf("***ppp : %d\n", ppp); // &pp
	printf("***ppp : %d\n", *ppp); // pp
	printf("***ppp : %d\n", **ppp); // p
	printf("***ppp : %d\n", ***ppp); // 10
	
	
	return 0;
}