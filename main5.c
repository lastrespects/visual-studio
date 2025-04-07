#include <stdio.h>

int main(void) {
 // CPU(레지스터)>캐시메모리>주기억장치>캐시메모리>보조기억장치	
 // 정보의 기본 단위 : 비트
 // 데이터 처리 : 이진수
 // 
	char a = 3;
	//scanf("%d", &a);
    // &a => a의 실제 주소
	/*a = 5;
	char* b = &a;
	* b = 5;
	*&a = 5;*/

	// 주소값을 저장하는 전용 변수 -> 포인터 변수
	/*printf("%d\n", a);
	printf("%d", *&a);*/
	// *& 상쇄
	
	// 문제 : 변수를 만들고 3.14를 넣은 후 출력해보세요.(가장 메모리를 효율적으로 사용해주세요.)


		//int i = 3.14; // 실패 => i 에는 오직 정수만 들어간다.
		//printf("1st 시도 => i : %d\n", i); // 


		//float f = 3.14;

		//printf("2nd 시도 => f : %d\n", f); // 실패 => %d`는 데이터를 `int 로 해석하겠다.`라는 뜻 입니다.

		//// 여기서 구현 

		//printf("3nd 시도 => f : %f\n", f)

	/*unsigned char x = 200;
	int -> 메모리크기 4바이트
	unsigned int -> 4바이트
	char -> 1바이트 -128 ~ +127
	unsigned char -> 1바이트 0~255*/
	printf("%d\n", x);


	return 0;
}