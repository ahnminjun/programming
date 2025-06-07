#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void music();

int main()
{
    music();

}

void music()
{
    typedef struct {
        char title[100];
        char artist[100];
        char genre[20];
        int time;
    } SONG;

    SONG songs[] = {
    {"thank u, next", "Ariana Grande", "pop", 208},
    {"Attention", "Charlie Puth", "pop", 211},
    {"�� ���� ����", "�ں���", "ballad", 226},
    {"How Long", "Charlie Puth", "pop", 198},
    {"I'm Fine", "��ź�ҳ��", "hip-hop", 226},
    {"Awake", "��ź�ҳ��", "ballad", 226},
    {"�Ƴ���", "MINO", "hip-hop", 241}
    };

    int song_list = 7;
    int input;
    int playlist_count = 0;
    int runtime = 0;
    SONG* playlist[5];

    printf("���� ��Ƽ��Ʈ �帣 ����ð�\n");
    for (int i = 0; i < song_list; i++)
    {
        printf("%d: %s %s %s %d\n",i+1, songs[i].title, songs[i].artist,
            songs[i].genre, songs[i].time);
    }
	
    while (1)
    {

        printf("�÷��̸���Ʈ�� �߰��� �� ��ȣ? ");
        scanf("%d", &input);

        if (input < 0 || input > 5)
        {
            printf("�߸��� ��ȣ�Դϴ�");
            continue;
        }

        if (playlist_count > 5)
        {
            printf("�� �̻� ���� �߰��� �� �����ϴ�");
            continue;
        }

        playlist[playlist_count] = &songs[input - 1];
        playlist_count++;
        runtime += songs[input - 1].time;

        for (int j = 0; j < playlist_count; j++)
        {
            printf("%s %s %s %d\n", playlist[j]->title,
                playlist[j]->artist, playlist[j]->genre, playlist[j]->time);

        }

        printf("�� ��� �ð� %d\n", runtime);

    }



}