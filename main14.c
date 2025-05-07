#include <stdio.h>
#include <stdlib.h>

#pragma warning (disable: 4996)
// 문제 : 몇명의 사람의 나이를 받을지 입력받고 입력받은 수 만큼 나이를 입력받은 후 저장해주세요.
// 조건 : malloc을 사용해서 낭비없는 메모리 운용을 보여주세요.
// 출력예시
/*
사람의 숫자를 입력해주세요. : 3[엔터]
1번째 사람의 나이를 입력해주세요 : 33[엔터]
2번째 사람의 나이를 입력해주세요 : 50[엔터]
3번째 사람의 나이를 입력해주세요 : 42[엔터]
1번째 사람의 나이 : 33
2번째 사람의 나이 : 50
3번째 사람의 나이 : 42
*/

#define NAMES_COUNT 10

int main(void) {
    //int count; //1) 사람의 수를 입력받을 공간 생성
    //2) 반복문을 이용해서 count에 입력받기
    //3) 입력받은 사람 수만큼 malloc을 이용해 메모리 할당
    //4) 반복문을 이용해서 나이를 입력하기
    //5) 저장된 나이를 출력
    //6) malloc을 이용해 만든 공간 메모리 해제


    printf("Hello World\n");


    // 문제 : 몇명의 사람의 나이를 받을지 입력받고 입력받은 수 만큼 나이를 입력받은 후 저장해주세요.
    // 조건 : malloc을 사용해서 낭비없는 메모리 운용을 보여주세요.
    // 출력예시
    /*
    사람의 숫자를 입력해주세요. : 3[엔터]
    1번째 사람의 나이를 입력해주세요 : 33[엔터]
    2번째 사람의 나이를 입력해주세요 : 50[엔터]
    3번째 사람의 나이를 입력해주세요 : 42[엔터]
    1번째 사람의 나이 : 33
    2번째 사람의 나이 : 50
    3번째 사람의 나이 : 42
    */


 
        int count; //1) 사람의 수를 입력받을 공간 생성
        while (1) {
            printf("사람의 숫자를 입력해주세요. : ");
            scanf("%d", &count);
            if (count > 0) {
                break;
            }
            else {
                printf("1이상의 값을 입력해주세요.\n");
            }
        }
        //2) 반복문을 이용해서 count에 입력받기
        int* ages = (int*)malloc(sizeof(int) * count);
        //3) 입력받은 사람 수만큼 malloc을 이용해 메모리 할당
        for (int i = 0; i < count; i++) {
            printf("%d번째 사람의 나이를 입력해주세요. :", i + 1);
            scanf("%d", &ages[i]);
        }
        //4) 반복문을 이용해서 나이를 입력하기
        for (int i = 0; i < count; i++) {
            printf("%d번째 사람의 나이 : %d\n", i + 1, ages[i]);
        }
        //5) 저장된 나이를 출력
        free(ages);
        //6) malloc을 이용해 만든 공간 메모리 해제

        int a[3] = { 1,2,3 };
        // 자료형 배열명[행의갱수][열의갯수]
        int arr[2][3] = {
            {1,2,3},
            {4,5,6}
        };
       /* x1000 = 1 = arr[0][0]
        x1004 = 2 = arr[0][1]
        x1008 = 3 = arr[0][2]
        x1012 = 4 = arr[1][0]
        x1016 = 5 = arr[1][1]
        x1020 = 6 = arr[1][2]*/
        printf("%d\n", arr[1][0]);
        printf("%p\n", arr[0]);
        printf("%p\n", arr[0]+1);
        //arr[i][j] == arr+i*열의갯수+j
        printf("%d\n", *((int*)arr + 0)); //1
        printf("%d\n", *((int*)arr + 2)); //3
        printf("%d\n", *((int*)arr + 4)); //5
  
        // 각각의 이름은 19 바이트 만큼 저장 가능합니다.
        char names[NAMES_COUNT][20];

        // 수정가능지역 시작  
        for (int i = 0; i < NAMES_COUNT; i++) {
            printf("%d번째 사람의 이름을 입력해주세요 :", i + 1);
            scanf("%s", &names[i][0],20);
        }

        for (int i = 0; i < NAMES_COUNT; i++) {
            printf("%d번째 사람의 이름 : %s\n", i + 1, names[i]);
        }
        // 수정가능지역 끝

        //int name[3];
        //name[1] == *(name + 1)
        //  int a;
        //a == *&a
        //  int names[i][j];
        //names[i] == &names[i][0]

    return 0;
}