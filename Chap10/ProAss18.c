/* 파일명: ProAss18.c

 * 내용: SONG 구조체 배열이 있을 때, 전체 곡 목록을 보여주고 사용자로부터 플레이리스트에
  추가할 노래를 번호로 선택하게 한다. 플레이리스트에 노래를 추가할 때마다 플레이리스트의
  곡 목록과 전체 재생 시간이 얼마인지를 출력한다. 플레이리스트에는 최대 5곡만 등록할 수 있다.
 * 작성자: 이호준

 * 날짜:  2025.06.10

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



struct SONG
{
    char title[100];
    char artist[100];
    char g[100];
    int playtime;
};

 /*
 * 함수명 : solve()
 * 기능(책임) :
 * 반환 : 없음
 */
void solve()
{
    struct SONG song[8] = 
    {
        {"thank u, next", "Ariana Grande   ", "pop    ", 208},
        {"Attention    ", "Charlie Puth    ", "pop    ", 211},
        {"별 보러 가자 ", "박보검          ", "ballad ", 316},
        {"How Long     ", "Charlie Puth    ", "hip-pop", 198},
        {"I'm Fine     ", "방탄소년단      ", "hip-pop", 209},
        {"봄날         ", "방탄소년단      ", "hip-pop", 274},
        {"Awake        ", "방탄소년단      ", "ballad ", 226},
        {"아낙네       ", "MINO            ", "hip-pop", 241}
    };

    printf("\t제목\t\t아티스트\t\t장르\t재생시간\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d : %s\t%s\t%s\t%d초\n",(i + 1), song[i].title, song[i].artist, song[i].g, song[i].playtime);
    }
    

    struct SONG* pl[5] = { NULL };

    int run = 0;
	int playtime = 0;
    int num;

    while (run < 5)
    {
        printf("플레이 리스트에 추가 할 번호?");
        scanf("%d", &num);
        if (num >= 1 && num <= 8)
        {
			pl[num] = &song[num-1];


            printf("<< 플레이리스트 >>\n");
            for (int j = 0; j <= run; j++)
            {
d                printf("%s\t%s\t%s\t%d\n", pl[j]->title, pl[j]->artist, pl[j]->g, pl[j]->playtime);
            }
            run++;

        }
        else
        {
            printf("잘못된 곡 번호입니다.\n");
			continue;
        }
    }

}


int main()
{
    solve();
    return 0;
}
