#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main(void)
{
    POINT curpos;//一个可储存坐标点的结构体变量，x横坐标，y,纵坐标，如curpos.x   curpos.y
    Sleep(5000);
    while(1)        
    { 
        GetCursorPos(&curpos);//获取当前鼠标的位置，位置将储存在curpos里。
        mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP,0,0,0,0);
        Sleep(100);
        SetCursorPos(curpos.x+10,curpos.y+10);
        Sleep(900);
        mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);
        SetCursorPos(curpos.x,curpos.y);
        for(int i=0;i<10;i++)
        {   
            Sleep(1000);
            if(GetAsyncKeyState(VK_SHIFT)&&0x8000)
                return 0;
        }
        
    } 
    return 0; 
}