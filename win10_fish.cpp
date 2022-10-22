#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main()
{
    char name[]="d:\\interesting.bat"; 
    ofstream outfile;
    outfile.open(name, ios::out);//生成空的批处理文件
    if (!outfile)
    {
        cerr << "somgthing wrong !" << endl;
        abort();
    }
    outfile << "taskkill /f /im studentmain.exe /t"<<endl;//设置bat文件要写入的指令
    outfile.close();
    cout<<"finished"<<endl;
    while(1)
    {
        Sleep(1000);
        if((GetAsyncKeyState(VK_LBUTTON)&&0x8000)&&(GetAsyncKeyState(VK_RBUTTON)&&0x8000))
            system("d:\\interesting.bat");
    }

}