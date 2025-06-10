/* 파일명: ProAss03.c

 * 내용: LOGIN 구조체 배열을 이용해서 로그인 과정을 프로그램을 작성하시오.
 * 아이디를 입력받아 LOGIN 구조체 배열에서 아이디를 찾은 다음 입력받은 패스워드와 등록된 패스워드를 비교해서 같으면 로그인성공 이라고 출력한다
 * LOGIN 구조체 배여릉ㄴ 크기가 5인 배열로 선언하고 적당한 값으로 초기화해서 사용한다.
 * 
 * // 아이디 : guest, pw = idontknow
 * 작성자: 이호준

 * 날짜:  2025.06.05

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


typedef struct {
	char id[6];
	char pw[12];
} LOGIN;


 /*
 * 함수명 : solve()
 * 기능(책임) : 로그인 과정을 구현.
 * 반환 : 없음
 */
void solve()
{

	LOGIN user = { "guest", "idontknow" };
	

	char i_id[10], i_pw[10];

	printf("ID?");
	scanf("%9s", i_id);
	printf("PW:");
	scanf("%9s", i_pw);

	if (strcmp(user.pw, i_pw) == 0)
	{
		printf("로그인 성공");
	}
	else 
	{
		printf("로그인 실패");
	}

}


int main()
{
    solve();
    return 0;
}
