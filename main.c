#include <stdio.h>
#include <stdlib.h>
int main() {
	// 정적 할당 : 프로그램이 실행될때 메모리공간을 미리 딱 정해놓는 것
	int a = 10;
	char name[10];
	// 동적 할당 : 프로그램이 실행되는 도중에 필요할 때 메모리를 요청해서 사용하는 방법
	int* arr = (int*)malloc(sizeof(int) * 10); // 10칸 짜리 배열을 동적으로 만드는 과정

	// 메모리를 만드는 방법 => malloc
	// 메모리를 반납하는 방법 => free
	//포인터 변수 = (자료형포인터)malloc(필요한메모리크기);
	int* arr1 = (int*)malloc(sizeof(int) * 10);
	if (arr1 == NULL) {
		printf("메모리할당 실패");
	}
	// 성공하면 메모리의 시작주소를 반환
	int* arr2 = (int*)malloc(sizeof(int));
	//free(포인터변수명);
	free(arr1);
	/*int a;
	int* p = &a;

	a =+ 123;
	*&a = 123;
	*p = 123;
	printf("%d\n", *arr2);*/

	//동적할당 받는법
	//포인터변수 = (자료형 포인터)malloc(필요한 메모리크기);

	// 문제) 정수를 저장할 수 있는 메모리를 동적할당을 이용해 만들어주시고 그 안에 777을 저장하고 출력한 다음 마지막에 메모리를 해제해주세요
	
	// 1. malloc으로 메모리 만들기
	int* p = (int*)malloc(sizeof(int));
	// 2. 만든 메모리에 777을 저장
	if (p == NULL) {
		printf("메모리할당 실패/n")
		return 1;
	}
	*p = 777;
	//3. 그 메모리 찾아가서 출력
	printf("%d\n", *p);

	


	





	return 0;
}