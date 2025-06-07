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
    {"별 보러 가자", "박보람", "ballad", 226},
    {"How Long", "Charlie Puth", "pop", 198},
    {"I'm Fine", "방탄소년단", "hip-hop", 226},
    {"Awake", "방탄소년단", "ballad", 226},
    {"아낙네", "MINO", "hip-hop", 241}
    };

    int song_list = 7;
    int input;
    int playlist_count = 0;
    int runtime = 0;
    SONG* playlist[5];

    printf("제목 아티스트 장르 재생시간\n");
    for (int i = 0; i < song_list; i++)
    {
        printf("%d: %s %s %s %d\n",i+1, songs[i].title, songs[i].artist,
            songs[i].genre, songs[i].time);
    }
	
    while (1)
    {

        printf("플레이리스트에 추가할 곡 번호? ");
        scanf("%d", &input);

        if (input < 0 || input > 5)
        {
            printf("잘못된 번호입니다");
            continue;
        }

        if (playlist_count > 5)
        {
            printf("더 이상 곡을 추가할 수 없습니다");
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

        printf("총 재생 시간 %d\n", runtime);

    }



}