#include <stdio.h>
// #define �ܼ��� ġȯ
#define PI 3.141592
#define ��� printf
// typedef - �ڷ����� �̸� ���̱�
typedef unsigned int unit;
// typedef �����ڷ��� ��Ī;
int main() {
	int arr[5] = { 1,2,3,4,5 };
	// arr = &arr[0]
	// �迭 ������ : �迭 ��ü�� ����Ű�� ������, �迭�ϳ��� �ּҸ� ����
	int* p = arr; // int �ϳ��� ����Ŵ
	printf("%d\n", *p);
	int (*pp)[5] = &arr; // int 5��¥�� �迭 �ϳ��� ����Ŵ 
	printf("%d\n", (*pp)[0]); // 1
	// pp == &arr
	int* p2[5]; // ������ 5��¥�� �迭	
	// ������ �迭 : �ּҸ� ������ ��� �迭
	int* a[3];
	// int�� ���� 3���� �ּҸ� �����ϴ� ������ �迭
	// 1. int�� ���� 3�� �����
	int x = 10;
	int y = 20;
	int z = 30;
	// 2. �ּ� 3���� �����ϴ� �迭 �����
	int* arr2[3];
	// 3. ������ �����Ϳ� �ּ� ����
	arr2[0] = &x;
	arr2[1] = &y;
	arr2[2] = &z;
	// 4. �ݺ����� �̿��ؼ� ���
	for (int i = 0; i < 3; i++) {
		printf("%d\n", *arr2[i]);
	}
	���("%f\n", PI);
	unit i = 5;
	char c = 'a' // ��������ǥ => ���� 1��
	char* s = "apple\0"; // ū����ǥ => ���ڿ�
	// c���� ���ڿ��� \0(�ι���)�� ������ �Ѵ�
	char name[5];
	name[0] = 'j';
	name[1] = 'e';
	name[2] = 'o';
	name[3] = 'n';
	name[4] = '\0';
	printf("%s", s);
	printf("%s", name);

	char name2[] = "hello"; // �����Ϸ��� �ڵ����� �������� �ι��ڸ� �־��ݴϴ�.


	return 0;
}
