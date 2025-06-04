/* ���ϸ�: ProAss08.c

 * ����: ������ �迭�� Ư�������� ä��� fill_array() �Լ��� �ۼ��Ͻÿ�.
 * ��, �����Ϳ� ������ ������ �����ڸ� �̿��Ѵ�.
 * fill_array �Լ��� �̿��ؼ� ũ�Ⱑ 20�� int �迭�� �Է¹��� ������ ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: ��ȣ��

 * ��¥:  2025.05.21
 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
 * �Լ��� : fill_array()
 * ���(å��) : �����͸� �̿��Ͽ� �迭�� �Է¹��� ������ ä��� �����.
 * ��ȯ : ����
 */
void fill_array(int* p, int what)
{
	for (int i = 0; i < 20; i++)
	{
		*(p + i) = what; 
	}



	printf("�迭: ");
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
}

 /*
 * �Լ��� : solve()
 * ���(å��) : ���ҿ� ������ ���� �Է¹޾� fill_array() �Լ��� ȣ����.
 * ��ȯ : ����
 */
void solve()
{
	int arr[20] = { 0 };

	int* p = arr; 

	int what;
	printf("�迭�� ���ҿ� ������ ��?");
	scanf("%d", &what);

	fill_array(p, what); 



}


int main()
{
	solve();
	return 0;
}