#include <stdio.h>
int main() {
	int age = 20;
	int* p = &age;
	char a = 5;
	char* pp = &a;
	// 자료형에 따라 읽는 크기가 달라지기 때문에
	// 주소만 알면 되는게 아니라 그 주소에 어떤 데이터가 얼마나 들어있는지 
	// 알아야 제대로 값을 읽어올 수 있기 때문에 포인터에 자료형을 같이 써야함
	// a번지에 있는 집 작은 원룸(1평)
	// p번지에 있는 집 큰 아파트(4평)
	int num = 1025;
	int* ip = &num;
	char* cp = (char*)&num;
	printf("num의 주소 : %p\n", &num);
	printf("int형 포인터 ip가 가리키는 값 : %d\n", *ip);
	printf("char형 포인터 cp가 가리키는 값 : %d\n", *cp);
	// 시스템에 따라 long의 범위가 다름 32비트 시스템에서 1바이트는
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(char));					
	int s = 2100000000;
	printf("s : %d\n", s);
	unsigned int t = 2200000000;
	printf("t : %u\n", t);
	long  long tt = 40000000000;
	printf("tt : %lld\n", tt);
	/*int a = 10;
	a = 20;
	int* p = &a;
	*p = 30;*/

	// 여기서 구현
	printf("size of char : %lu\n", sizeof(c));
	printf("size of char* : %lu\n", sizeof(char*));
	int* ip;
	ip++;

	printf("size of short : %lu\n", sizeof(s));
	printf("size of short* : %lu\n", sizeof(short*));

	printf("size of int : %lu\n", sizeof(i));
	printf("size of int* : %lu\n", sizeof(int*))


	// 함수 호출 방식 두가지
	// 1) 값에 의한 호출: 변수의 값을 복사해서 함수에 전달
	// change(x) == change(20)
	// 2) 참조에 의한 호출 : 변수의 주소를 전달해서 원본을 조작
	// change(&x)

	// a = b
	// 포인터 변수의 복사본만 바꿈
	// 값이 안바뀜
	// *a =*b
	// 포인터가 가리키는 실제 값을 바꿈
	// 값이 바뀜
	// a주소 b주소가 적힌 쪽지를 친구에게 주었을때 친구가 쪽찌를 바꾸었지만 그 쪽지는 복사본
	// => a주소와 b주소는 안바뀐것이다.
	// 1. 코드 영역
	// main(), printf() 함수
	// 2. 데이터 영역
	// static변수,초기값이 있는 전역변수
	// 3. BSS 영역
	// 초기값이 없는 전역변수, static변수
	// 4. 힙 영역
	// malloc() 등 동적으로 할당한 메모리가 쌓이는 곳
	// 5. 스택 영역
	// 함수호출시 생성되는 지역변수, 매개변수, 반환주소 등. 위에서 아래방향(주소감소방향)으로 메모리가 쌓인다.
	// int a, char b
	// void test(){
	//				char a = 1;
	//				char b = 5;
	// }
	// 포인터 : 주소를 저장하는 변수
	// int age = 20; //age라는 공간에 20이라는 값을 넣은 것
	// int* p = &age; // p라는 지도에 age라는 공간의 위치를 적어놓은 것
	// p안에는 주소
	// *p > p안에 저장되어 있는 주소의 진짜 값을 볼수있다.
	//(*는 가리킨다라는 뜻, & 주소를 알려준다)
	// char a = 5;
	// char* pa = &a;
	// 
	// 값으로 보내는것
	// 주소로 보내는것
	// 
	// 주소차이는 int변수일때 4바이트 차이가 나지만 int*
	// 포인터에서 +1,-1연산은 4바이트 단위로 이동
	



 return 0;
}