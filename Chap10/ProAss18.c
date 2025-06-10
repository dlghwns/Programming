/* ���ϸ�: ProAss18.c

 * ����: SONG ����ü �迭�� ���� ��, ��ü �� ����� �����ְ� ����ڷκ��� �÷��̸���Ʈ��
  �߰��� �뷡�� ��ȣ�� �����ϰ� �Ѵ�. �÷��̸���Ʈ�� �뷡�� �߰��� ������ �÷��̸���Ʈ��
  �� ��ϰ� ��ü ��� �ð��� �������� ����Ѵ�. �÷��̸���Ʈ���� �ִ� 5� ����� �� �ִ�.
 * �ۼ���: ��ȣ��

 * ��¥:  2025.06.10

 * ����: v1.0

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
 * �Լ��� : solve()
 * ���(å��) :
 * ��ȯ : ����
 */
void solve()
{
    struct SONG song[8] = 
    {
        {"thank u, next", "Ariana Grande   ", "pop    ", 208},
        {"Attention    ", "Charlie Puth    ", "pop    ", 211},
        {"�� ���� ���� ", "�ں���          ", "ballad ", 316},
        {"How Long     ", "Charlie Puth    ", "hip-pop", 198},
        {"I'm Fine     ", "��ź�ҳ��      ", "hip-pop", 209},
        {"����         ", "��ź�ҳ��      ", "hip-pop", 274},
        {"Awake        ", "��ź�ҳ��      ", "ballad ", 226},
        {"�Ƴ���       ", "MINO            ", "hip-pop", 241}
    };

    printf("\t����\t\t��Ƽ��Ʈ\t\t�帣\t����ð�\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d : %s\t%s\t%s\t%d��\n",(i + 1), song[i].title, song[i].artist, song[i].g, song[i].playtime);
    }
    

    struct SONG* pl[5] = { NULL };

    int run = 0;
	int playtime = 0;
    int num;

    while (run < 5)
    {
        printf("�÷��� ����Ʈ�� �߰� �� ��ȣ?");
        scanf("%d", &num);
        if (num >= 1 && num <= 8)
        {
			pl[num] = &song[num-1];


            printf("<< �÷��̸���Ʈ >>\n");
            for (int j = 0; j <= run; j++)
            {
d                printf("%s\t%s\t%s\t%d\n", pl[j]->title, pl[j]->artist, pl[j]->g, pl[j]->playtime);
            }
            run++;

        }
        else
        {
            printf("�߸��� �� ��ȣ�Դϴ�.\n");
			continue;
        }
    }

}


int main()
{
    solve();
    return 0;
}
