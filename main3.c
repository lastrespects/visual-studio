#include <stdio.h>
int main() {
	// 증강연산자
	
	//i = i + 1; // 1의 값을 1증가시킨다
	//i += 1; // i의 값을 1 증가시킨다
	//i++; // i의 값을 1 증가시킨다
	//i += 2; // i의 값을 2 증가시킨다
	//i = i - 1; // i의 값을 1감소시킨다
	//i -= 1; // i의 값을 1감소시킨다
	//i--; // i의 값을 1감소시킨다
	// 후위증감연산
	// 후위 증감 연산은 변수의 값을 먼저 사용한 다음에 값을 증가시키거나 감소시킨다.
	//++i;
	//--i;;
	// 전위증감연산
	// 전위 증감 연산은 변수의 값을 먼저 증가시키거나 감소시킨 후에 값을 사용한다.

	int x1 = 5;
	int y1 = ++x1;
	printf("x1 : %d\n", x1); //6 
	printf("y1 : %d\n", y1); //6

	int x2 = 5;
	int y2 = x2++;
	printf("x2 : %d\n", x2); //6
	printf("y2 : %d\n", y2); //5

	// ----------------------------------------------------------------------------
	int dan = 1;
	int i = 1;

	printf("%d * %d = %d\n", dan, i, dan * i);
	// i의 값을 1 증가시킨다
	i = i + 1;
	printf("%d * %d = %d\n", dan, i, dan * i);
	i += 1;
	printf("%d * %d = %d\n", dan, i, dan * i);
	i++;
	printf("%d * %d = %d\n", dan, i, dan * i);
	i += 1;
	printf("%d * %d = %d\n", dan, i, dan * i);
	i += 1;
	printf("%d * %d = %d\n", dan, i, dan * i);
	i += 1;
	printf("%d * %d = %d\n", dan, i, dan * i);
	i += 1;
	printf("%d * %d = %d\n", dan, i, dan * i);
	i += 1;
	printf("%d * %d = %d\n", dan, i, dan * i);
	i += 1;

	//=====================================================

	// 반복(while, do while, for)
	// for문 반복횟수를 정확히 알고있을때 
	// while문 조건에 따라 반복횟수를 결정할때
	// do while 조건에 따라 반복횟수를 결정할떄
	// 1) 초기값
	// 2) 조건식
	// 3) 증감식
	// while
	// 초기값
	// while(조건식){
	//               조건식이 참일 경우 실행될 문장;
	//               증감값;
	// } 

	int i1 = 1;
	while (i1 <= 10) {
		printf("%d\n", i1);
		i1++;
	}
	printf("%d\n", i1);

	// do while문
	// 초기값
	// do{
	//    참일 경우 실행될 문장;
	//    증감값;
	// }while(조건식);

	int i2 = 1;
	do {
		printf("%d\n", i2);
		i2++;
	} while (i2 >= 10);

	
	// for문
	// for(1.초기값; 2.조건식; 4.증감값){
	//     3. 조건식이 참일경우 실행할 문장;
	// }
	// if(조건식) 

	for (int i3 = 1;  i3 <= 10;  i3++) {
		printf("% d\n", i3);
	}
	

	// 기본개념
	// while => ~~ 할 때 동안 계속
	// while => ~~ 가 참일 때 동안 계속
	// while => if문 똑같다. 단 무한실행 if문 이다.

	int limit = 1000;

	// 수정가능지역 시작
	int dan2 = 1;
	int i4 = 1;
	while (i4 <= limit) {
		printf("%d * %d = %d\n", dan2, i4, dan2 * i4);
		i4++;
	}
// 수정가능지역 끝

	 // 1. 1 ~ 100까지 출력
  // int i = 1; 
  //   while(i<=100){
  //   printf("%d\n",i);
  //   i++;
  // }  
	for (int i = 1; i <= 100; i++) {
		printf("%d", i);
	}
	printf("\n");
	// 2. -25 ~ 50까지 출력
	// int i1 = -25;
	//   while(i1<=50){
	//     printf("%d\n",i1);
	//     i1++;
	//   }
	printf("\n");
	// 3. 1 ~ 100 까지 짝수만 출력
	

		// 1. 1 ~ 100까지 출력

		for (int i = 1; i <= 100; i++) {
			printf("%d ", i);
		}
		printf("\n");

		// 2. -25 ~ 50까지 출력

		for (int i = -25; i <= 50; i++) {
			printf("%d ", i);
		}
		printf("\n");
		// 3. 1 ~ 100 까지 짝수만 출력

		for (int i = 1; i <= 100; i++) {
			if (i % 2 == 0) {
				printf("%d ", i);
			}
		}
		printf("\n");
		// 4. 100 ~ 200 사이의 홀수만 출력

		for (int i = 100; i <= 200; i++) {
			if (i % 2 != 0) {
				printf("%d ", i);
			}
		}
		printf("\n");
		// 5. 1 ~ 500 사이의 수 중 4의 배수만 출력

		for (int i = 1; i <= 500; i++) {
			if (i % 4 == 0) {
				printf("%d ", i);
			}
		}
		printf("\n");
		// 6. 1 ~ 1000 사이의 수 중 1000의 약수만 출력

		for (int i = 1; i <= 1000; i++) {
			if (1000 % i == 0) {
				printf("%d ", i);
			}
		}
		printf("\n");

		// 7. 1 ~ 1000 사이의 수 중 3의 배수 이면서 5의 배수인 수만 출력
		for (int i = 1; i <= 1000; i++) {
			if (i % 3 == 0 && i % 5 == 0) {
				printf("%d ", i);
			}
		}
		printf("\n");

		int sum = 0;
		for (int i = 1; i <= 100; i++) {
			if (i % 2 == 0) {
				int sum = sum + i;
			}
		}
		printf("1부터 100까지의 합 :%d\n", sum);
	return 0;
}