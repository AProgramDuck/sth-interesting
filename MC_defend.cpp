#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        double defend=0,defend_toughness=0,attack=0,damage=0,protect=0;
        cout<<"armor=";
        cin>>defend;
        cout<<"armor_toughness=";
        cin>>defend_toughness;
        cout<<"protect=";
        cin>>protect;
        cout<<"attack=";
        cin>>attack;
        damage=attack*(1-(min(20.0,max(defend/5,defend-(attack/(2+defend_toughness/4)))))/25);
        damage=damage*(1-min(protect*0.04,0.8));
        cout<<damage<<endl;
    }
	system("pause");
	return 0;
}