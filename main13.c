#include <stdio.h>
#include <stdlib.h>
int main() {
	// ���� �Ҵ� : ���α׷��� ����ɶ� �޸𸮰����� �̸� �� ���س��� ��
	int a = 10;
	char name[10];
	// ���� �Ҵ� : ���α׷��� ����Ǵ� ���߿� �ʿ��� �� �޸𸮸� ��û�ؼ� ����ϴ� ���
	int* arr = (int*)malloc(sizeof(int) * 10); // 10ĭ ¥�� �迭�� �������� ����� ����

	// �޸𸮸� ����� ��� => malloc
	// �޸𸮸� �ݳ��ϴ� ��� => free
	//������ ���� = (�ڷ���������)malloc(�ʿ��Ѹ޸�ũ��);
	int* arr1 = (int*)malloc(sizeof(int) * 10);
	if (arr1 == NULL) {
		printf("�޸��Ҵ� ����");
	}
	// �����ϸ� �޸��� �����ּҸ� ��ȯ
	int* arr2 = (int*)malloc(sizeof(int));
	//free(�����ͺ�����);
	free(arr1);
	/*int a;
	int* p = &a;

	a =+ 123;
	*&a = 123;
	*p = 123;
	printf("%d\n", *arr2);*/

	//�����Ҵ� �޴¹�
	//�����ͺ��� = (�ڷ��� ������)malloc(�ʿ��� �޸�ũ��);

	// ����) ������ ������ �� �ִ� �޸𸮸� �����Ҵ��� �̿��� ������ֽð� �� �ȿ� 777�� �����ϰ� ����� ���� �������� �޸𸮸� �������ּ���
	
	// 1. malloc���� �޸� �����
	int* p = (int*)malloc(sizeof(int));
	// 2. ���� �޸𸮿� 777�� ����
	if (p == NULL) {
		printf("�޸��Ҵ� ����/n")
		return 1;
	}
	*p = 777;
	//3. �� �޸� ã�ư��� ���
	printf("%d\n", *p);

	//����

	/*int num = 10;
	�����Ҵ�
	int arr[5];*/

	//�����Ҵ�: ���α׷� �����߿� �ʿ��� ��ŭ ������ �����
	//����� ������ ���� ������ �� �ִ�.
	//(int*)malloc(sizeof(int) * 5)
	//int* p = (int*)malloc(20);
	//char* p1 = (char*)malloc(sizeof(char) * 20);
	// p1 = (char*)realloc(p1,sizeof(char)*50);
	//free(p1);

	//����Ÿ�� �Լ���(�Ű�����) {
	//	�������ڵ�
	//		return��;
	//}


	





	return 0;
}