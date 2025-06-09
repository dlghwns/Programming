
/* ���ϸ�: ProAss.c

 * ����: Ŀ�Ǽ󿡼� �ǸŵǴ� ��ǰ ������ ��Ÿ���� PRODUCT ����ü�� �����Ͻÿ�.
 * �� ��ǰ���� ��ǰ��, ����, ��� ������ �� �־�� �Ѵ�.
 * PRODUCT ����ü�� �Ű������� ���޹޾� ��ǰ ������ ����ϴ� print_product �Լ��� �����Ͻÿ�.
 * PRODUCT ����ü ������ ������ ���� ��ǰ��, ����, ��� �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * ����� ��ǰ���� ��ĭ ���� �� �ܾ�� �Է��Ѵ�.
 * 
 * �ۼ���: ��ȣ��

 * ��¥:  2025.06.09

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


struct PRODUCT
{
	char name[100];  
	int price;      
	int stock;      
};



/*
 * �Լ��� : print_product()
 * ���(å��) : PRODUCT ����ü ������ �Ű������� �ް� ��ǰ ������ ��¤��Ѵ�.
 * ��ȯ : ����
 */
void print_product(struct PRODUCT product)
{
	printf("[%s %d�� ���:%d]", product.name, product.price, product.stock);
}

 /*
 * �Լ��� : solve()
 * ���(å��) : ��ǰ ������ �Է´� �Լ�, print_product �Լ��� ȣ���Ͽ� ��ǰ ������ ����Ѵ�.
 * ��ȯ : ����
 */
void solve()
{
	struct PRODUCT product;
	printf("��ǰ��: ");
	scanf("%s", product.name);
	printf("����: ");
	scanf("%d", &product.price);
	printf("���: ");
	scanf("%d", &product.stock);

	print_product(product);
}


int main()
{
    solve();
    return 0;
}
