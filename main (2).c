#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <time.h>
#include <windows.h>
void ClearConsoleToColors(int ForgC, int BackC);
COORD coord = {0, 0};
void gotoxy (int x, int y)
{
    coord.X = x; coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTRUT_HANDLE),coord);
}
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while  (goal > clock());
}
