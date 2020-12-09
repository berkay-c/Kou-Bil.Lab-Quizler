#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main(void)
{
    int x=0,y=0;
    char tus;
    int degisken=0;
    tus=getch();

    if(tus==32)//boşluk
    {
        degisken++;
    }

    gotoxy(x,y);
    printf("+");
table:
    while(1)
    {
        while(degisken%2==1)
        {
            gotoxy(x,y);
            tus=getch();
            if(tus==77)// sağa
            {
                printf("+");
                x++;
            }
            else if(tus==72)// yukarı
            {
                printf("+");
                y--;
            }
            else if(tus==80)// aşağı
            {
                printf("+");
                y++;
            }
            else if(tus==75)//sola
            {
                printf("+");
                x--;
            }
            else if(tus==27)//esc
            {
                return 0 ;


            }
            else if(tus==32)//boşluk
            {
                degisken++;
            }
            gotoxy(x,y);
        }

        gotoxy(x,y);
        printf(" ");

        while(degisken%2==0)
        {
            tus=getch();
            if(tus==77)//sağa
            {
                printf(" ");
                x++;
            }
            else if(tus==72)//yukarı
            {
                printf(" ");
                y--;
            }
            else if(tus==80)//aşağı
            {
                printf(" ");
                y++;
            }
            else if(tus==75)//sola
            {
                printf(" ");
                x--;
            }
            else if(tus==27)//esc
            {
                return 1;
            }
            else if(tus==32)//boşluk
            {
                degisken++;
                goto table;
            }
            gotoxy(x,y);
        }

        getch();
        return 0 ;
    }
}
int gotoxy(int  x,int  y)
{

    COORD  c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
    return 0;
}
