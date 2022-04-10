#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main()
{
    int lock=0;
    POINT curpos;
    HWND window = WindowFromPoint(curpos);
    while(1)     
    {   
        if(GetAsyncKeyState(VK_END)&&0x8000)
        {
            if(lock==0)
                lock=1;
            else
                lock=0;
            
        }
        if(GetAsyncKeyState(VK_HOME)&&0x8000)
        {
            GetCursorPos(&curpos);
            window = WindowFromPoint(curpos);
        }
        Sleep(200);
        if(lock==0)
        {
            if(GetAsyncKeyState(VK_CONTROL)&&0x8000)
                ShowWindow(window,SW_HIDE);
            if(GetAsyncKeyState(VK_MENU)&&0x8000)
                ShowWindow(window,SW_RESTORE);
        }
        else 
            Sleep(300);
    }
    return 0;
}