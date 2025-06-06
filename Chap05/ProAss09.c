/* 파일명: ProAss09.c

 * 내용: 햄버거 가게의 계산서 프로그램을 작성하시오. 햄버거는 4000원, 콜라는 1500원, 감자튀김은 2000원이고,
 *		세 가지를 세트로 주문하면 6500원이라고 하자. 햄버거, 콜라, 감자튀김의 수량을 입력받아서 최대한 세트로 구성하고,
 *		나머지는 단품으로 계산하도록 한다. 예를 들어 햄버거 2, 콜라 1, 감자튀김 3을 주문하면
 *		계산은 세트 1, 햄버거 1, 감자튀김 2로 해야한다.
 * 작성자: 이호준

 * 날짜: 2025.4. 16

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 /*
 * 함수명 : solve()
 * 기능(책임) : 햄버거, 감자, 콜라의 개수를 입력받고 ? : 연산자를 사용하여 가장 낮은 개수를 찾아서 세트에 저장을한다.
 *				세트가 된 경우 전체 - 세트 수를 해주고, 햄버거, 감자, 콜라의 개수를 출력한다.
 *				계산된 개수에 금액을 곱하여 출력해준다.
 * 반환 : 없음
 */
int solve()
{
	int ham, coke, gamja, set = 0;
	//낮은거 찾아서 set에 저장한다.

	printf("[햄버거 4000원, 감자튀김 2000원, 콜라 1500원, 세트 6500원]\n");

	printf("햄버거 개수? ");
	scanf("%d", &ham);

	printf("감자튀김 개수? ");
	scanf("%d", &gamja);

	printf("콜라 개수? ");
	scanf("%d", &coke);

	//세트 계산.   1.햄버거랑 콜라 비교.
	set = ham < coke ? ham : coke; 
	set = set < gamja ? set : gamja; // 2.위에거랑 감튀랑 비교.

	ham -= set;    //세트 수 빼줘야함.
	gamja -= set;
	
	printf("\n\n상품명		단가	수량	금액\n");
	printf("세트		6500	%d	%d\n", set, set * 6500);
	printf("햄버거		4000	%d	%d\n", ham, ham * 4000);
	printf("감자튀김	2000	%d	%d\n", gamja, gamja * 4000);
	printf("\n");
	printf("----------------------------------------\n");
	printf("\n");
	printf("합계				%d", (set * 6500) + (ham * 4000) + (gamja * 2000));



}


int main()
{
	solve();
	return 0;
}