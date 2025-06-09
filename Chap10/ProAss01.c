/* 파일명: ProAss01.c

 * 내용: 인터넷 사이트에 로그인할 때 사용되는 아이디와 패스워드를 관리하기 위한 LOGIN 구조체를 정의하시오.
  아이디와 패스워드는 각각 최대 20글자까지 입력할 수 있다.
  LOGIN 구조체 변수를 선언한 다음 아이디와 패스워드를 입력받아 저장하고 출력하는 프로그램을 작성하시오.
  패스워드를 출력할 때는 패스워드의 내용은 보이지 않도록 패스워드 글자 수만큼 *을 대신 출력하시오.
 * 작성자: 이호준

 * 날짜:  2025.05.21
 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



struct login {
	char id[20];
	char pw[20];
};


 /*
 * 함수명 : solve()
 * 기능(책임) : 아이디아 패스워드를 입력받아 구조체를 만들어 저장하고, 저장된 값을 불러와 출력한다.
 * 반환 : 없음
 */
void solve()
{

	struct login Login;
	printf("아이디?");
	scanf("%s", &Login.id);
	printf("패스워드?");
	scanf("%s", &Login.pw);

	printf("아이디: %s\n", Login.id);
	printf("패스워드: ");
	for (int i = 0; i <= 20; i++)
	{
		if (Login.pw[i] == '\0') 
			break; 
		printf("*"); 
	}
}


int main()
{
	solve();
	return 0;
}