/* ���ϸ�: ProAss.c

 * ����: �� ũ�Ⱑ 5�� 2���� int �迭�� ��� ���Ҹ� Ư�� ������ ä��� fill_2d_array() �Լ��� �ۼ��Ͻÿ�.
 * �Լ��� �Ű������� �迭 ��ü�� ���� �����Ϳ� �迭�� �� ũ�⸦ �����Ѵ�.
 * �� ũ�Ⱑ 5, �� ũ�Ⱑ 4�� 2���� �迭�� �Է¹��� ������ ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: ��ȣ��

 * ��¥:  2025.05.21
 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void fill_2darray(int ptr[], int hang, int num)
{

}


 /*
 * �Լ��� : solve()
 * ���(å��) : ���� �ϳ��� �Է¹޾� fill_2d_array() �Լ��� ȣ����.
 * ��ȯ : ����
 */
void solve()
{
	int arr[4][5]; // 2���� �迭 ����
	int* ptr = &arr[0][0];

	int num; // �Է¹��� ����
	// ���� �Է�
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d", &num);
	
	fill_2darray();

}


int main()
{
	solve();
	return 0;
}