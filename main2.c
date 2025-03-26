#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    printf("10+10 : %d\n", 10 + 10);
    printf("20+15 : %d\n", 20 - 15);
    printf("20*10 : %d\n", 20 * 10);
    printf("10/3 : %d\n", 10 / 3);
    printf("10%%3 : %d\n", 10 % 3);
    printf("10/3.0 : %f\n", 10 / 3.0);
    // %d 10진 정수를 담을 수 있는 서식 지정자
    // %f 실수 전용 서식지정자
    printf("%d\n", 10 == 5);
    // 숫자 1은 참, 숫자 0은 거짓
    // printf("%d\n", 10 = 5);x
    printf("%d\n", 10 != 5);
    printf("%d\n", 10 > 3);
    printf("%d\n", 10 > 3 && 10 == 5);
    printf("%d\n", 10 > 3 || 10 == 5);
    printf("========================================\n");




    // if문
    // 실행할 문장이 한줄인경우
    // if(조건식)
    //            조건식이 참일경우 실행할문장;
    // 실행할 문장이 두줄이상인 경우
    //if(조건식){
    //           조건식이 참일경우 실행할문장;
    //           조건식이 참일경우 실행할문장;
    // }

    // if(조건식1){
    //           조건식1이 참일경우 실행할문장; 
    // }else if(조건식)2{
    //           조건식2이 참일경우 실행할문장;
    // }else if(조건식)3{
    //           조건식3이 참일경우 실행할문장; 
    //else{
    //           조건식3이 거짓일 경우 실행할 문장;
    // }
    // switch case문
    // switch(값)
    // case 값1:
    // 값1일때 실행할 문장;
    // break;
    // case 값2:
    // 값2일때 실행할 문장;
    // break;
    // default : 
    // 값이 위에 없을때 실행될 내용;
    // break;

    printf("================================\n");
    switch (1) {
    case 1:
        printf("1입니다.\n");
        break;
    case 2:
        printf("2입니다.\n");
        break;
    default:
        printf("1과 2가 아닙니다.\n");
        break;
    }
  

    // 조건식?조건식이 참일경우 실행할문장:조건식이 거짓일 경우 실행할문장;
    
    // scanf(서식지정자, 주소);
    int t=9;
    scanf("%d", &t);
    printf("%d\n", t);
    // 리턴타입 함수명(매개변수){
    // 재사용할 코드}
    // 함수명();

    int age;
    scanf("%d", &age);
    printf("나는 몇살입니다. : %d\n", age);
    if (age < 19) {
        printf("할인대상입니다");
    }
    else if (age >= 60) {
        printf("할인대상입니다");
    }
    else {
        printf("할인대상이 아닙니다.");
    }

  
    return 0;
}

