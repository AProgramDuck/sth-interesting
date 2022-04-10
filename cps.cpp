#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main(void)
{
    Sleep(500);
    while(1)
    {
        while(1)
        {
            if(GetAsyncKeyState(VK_CONTROL)&&0x8000)
                break;
            else
                Sleep(100);
        }
        while(1)        
        {   
            //mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP,0,0,0,0);
            mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);
            Sleep(1);
            if(GetAsyncKeyState(VK_SHIFT)&&0x8000)
                break; 
        } 
    }
    
    return 0; 
}