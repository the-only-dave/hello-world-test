#include<iostream>

using namespace std;

double xp,str,lvl,gold,spd,mag,hp,maxhp,klasschoice;
double enmstr,enmlvl,enmspd,enmmag,enmhp,enmgold,enmxp;
double swdstr,bowstr,magstr,maghp;
string inp;
int i = 1;


int main()
{
    char ans1;
    cout << "-------------------------------\n" << endl;
    cout << "             SimPG             \n" << endl;
    cout << "         Made by Dave          \n" << endl;
    cout << "-------------------------------\n" << endl;
    cout << "Start game? (y/n)" << endl;
    cin >> ans1;
    if(ans1 == 'y') {
            cout << " " << endl;
    }
    else{
        return 0;
    }
    int klass;
    while(klasschoice!=1)
    {
        cout << "-------------------------------\n" "Choose a class: \nKnight - 1\nArcher - 2\nWizard - 3\n" << "-------------------------------\n" << endl;
        cin >> klass;
        if (klass == 1){
            lvl=1; str=5; xp=0; gold=0; spd=2; mag=2;maxhp=15;gold=0;hp=maxhp;swdstr=2;bowstr=1;magstr=1;maghp=1;klasschoice=1;
            cout << "-------------------------------\n" << "You chose Knight." << endl;
            cout << "Stats: " << lvl << " Level, " << xp << " Experience, " << hp << " of " << maxhp << " Health, " << str << " Strength, " << spd << " Speed, " << mag << " Magic." << endl;
            cout << "You can use the 'help' command at any time to see the current commands." << endl;
            cout << "-------------------------------\n";
        }
        if (klass == 2){
            lvl=1; str=3; xp=0; gold=0; spd=5; mag=3;maxhp=13;gold=0;hp=maxhp;swdstr=1;bowstr=2;magstr=1;maghp=1;klasschoice=1;
            cout << "-------------------------------\n" << "You chose Archer." << endl;
            cout << "Stats: " << lvl << " Level, " << xp << " Experience, " << hp << " of " << maxhp << " Health, " << str << " Strength, " << spd << " Speed, " << mag << " Magic." << endl;
            cout << "You can use the 'help' command at any time to see the current commands." << endl;
            cout << "-------------------------------\n";
        }
        if (klass == 3){
            lvl=1; str=2; xp=0; gold=0; spd=5; mag=5;maxhp=10;gold=0;hp=maxhp;swdstr=1;bowstr=1;magstr=2;maghp=2;klasschoice=1;
            cout << "-------------------------------\n" << "You chose Wizard" << endl;
            cout << "Stats: " << lvl << " Level, " << xp << " Experience, " << hp << " of " << maxhp << " Health, " << str << " Strength, " << spd << " Speed, " << mag << " Magic." << endl;
            cout << "You can use the 'help' command at any time to see the current commands." << endl;
            cout << "-------------------------------\n";
        }
    }
    while(i=1){
    cout << "What do you want to do?" << endl;
    cin >> inp;
    if (inp=="stats"){
        cout << "-------------------------------\n" << "Stats: " << lvl << " Level, " << xp << " Experience, " << hp << " of " << maxhp << " Health, " << str << " Strength, " << spd << " Speed, " << mag << " Magic, and " << gold << " Gold." << "-------------------------------\n";
    }
    if (inp=="help") cout << "Current commands: explore, attack, stats, help, shop, exit." << endl;
    if (inp=="attack") cout << "Can't do that right now!\n";
    if (inp=="exit") return 0;
    if (inp=="shop"){
        cout << "-------------------------------\n\n" << "Welcome to the shop!\n\n" << "Swords:\n" << "1 - Steel Sword - 100 gold\n2 - Silver Sword - 250 gold\n3 - Platinum Sword - 500 gold\n\n" << "Bows: \n" << "4 - Steel Bow - 100 gold\n5 - Silver Bow - 250 gold\n6 - Platinum Bow - 500 gold\n\n" << "Staves: \n" << "7 - Fire Staff - 100 gold\n8 - Blaze Staff - 250 gold\n9 - Inferno Staff - 500 gold\n\n";
        cout << "-------------------------------\n\n";
        cin >> inp;
        if (inp=="1"){
            if (gold<100) cout << "You don't have enough gold to buy that!\n" << "-------------------------------\n";
            if (gold>=100)
            {
                swdstr=3;
                cout << "You bought a Steel Sword for 100 gold.\n" << "-------------------------------\n";
                gold = gold-100;
            }
        }
        if (inp=="2"){
            if (gold<250) cout << "You don't have enough gold to buy that!\n" << "-------------------------------\n";
            if (gold>=250)
            {
                swdstr=5;
                cout << "You bought a Silver Sword for 250 gold.\n" << "-------------------------------\n";
                gold = gold-250;
            }
        }
        if (inp=="3"){
            if (gold<500) cout << "You don't have enough gold to buy that!\n" << "-------------------------------\n";
            if (gold>=500)
            {
                swdstr=7;
                cout << "You bought a Platinum Sword for 500 gold.\n" << "-------------------------------\n";
                gold = gold-500;
            }
        }
        if (inp=="4"){
            if (gold<100) cout << "You don't have enough gold to buy that!\n" << "-------------------------------\n";
            if (gold>=100)
            {
                bowstr=3;
                cout << "You bought a Steel Bow for 100 gold.\n" << "-------------------------------\n";
                gold = gold-100;
            }
        }
        if (inp=="5"){
            if (gold<250) cout << "You don't have enough gold to buy that!\n" << "-------------------------------\n";
            if (gold>=250)
            {
                bowstr=5;
                cout << "You bought a Silver Bow for 250 gold.\n" << "-------------------------------\n";
                gold = gold-250;
            }
        }
        if (inp=="6"){
            if (gold<500) cout << "You don't have enough gold to buy that!\n" << "-------------------------------\n";
            if (gold>=500)
            {
                bowstr=7;
                cout << "You bought a Platinum Bow for 500 gold.\n" << "-------------------------------\n";
                gold = gold-500;
            }
        }
        if (inp=="7"){
            if (gold<100) cout << "You don't have enough gold to buy that!\n" << "-------------------------------\n";
            if (gold>=100)
            {
                magstr=3;
                cout << "You bought a Fire Staff for 100 gold.\n" << "-------------------------------\n";
                gold = gold-100;
            }
        }
        if (inp=="8"){
            if (gold<250) cout << "You don't have enough gold to buy that!\n" << "-------------------------------\n";
            if (gold>=250)
            {
                magstr=5;
                cout << "You bought a Blaze Staff for 250 gold.\n" << "-------------------------------\n";
                gold = gold-250;
            }
        }
        if (inp=="9"){
            if (gold<500) cout << "You don't have enough gold to buy that!\n" << "-------------------------------\n";
            if (gold>=500)
            {
                magstr=7;
                cout << "You bought a Inferno Staff for 500 gold.\n" << "-------------------------------\n";
                gold = gold-500;
            }
        }
    }
    if(inp == "explore"){
        enmlvl=lvl;
        if (lvl>=1)enmstr=1; if (lvl<1)  ;
        if (lvl<=3) enmspd=lvl; else enmspd=3;
        enmmag=1;
        enmhp=10+(2*lvl);
        enmgold=lvl+1;
        enmxp=15;
        cout << "-------------------------------\n";
        cout << "An angry goblin appears." << endl;
        cout << "Enemy stats: " << enmlvl << " Level, " << enmhp << " Health, " << enmstr << " Strength, " << enmspd << " Speed, " << enmmag << " Magic." << endl;
        while(enmhp>0){
            cout << "Enemy Health: " << enmhp << endl;
            cout << "Your Health: " << hp << endl;
            cout << "-------------------------------\n";
            cout << "What do you want to do?" << endl;
            cin >> inp;
            if(inp=="attack")
            {
                if(klass==1)enmhp = enmhp-str*(0.5*swdstr);
                if(klass==2)enmhp = enmhp-spd*(0.5*bowstr);
                if(klass==3)enmhp = enmhp-mag*(0.5*magstr);
                cout << "-------------------------------\n";
                cout << "You hit the enemy!" << endl;
                hp = hp-enmstr;
                cout << "The enemy hit you!" << endl;
               // cout << "-------------------------------\n";
            }
        }
        if (enmhp<=0)
            cout << "-------------------------------\n" << "You have defeated the enemy!" << endl;
            gold = gold+enmgold;
            xp=xp+enmxp;
            hp=maxhp;
            if (xp>=lvl*15){
                xp=0;
                lvl=lvl+1;
                str=str+1;
                spd=spd+1;
                maxhp=maxhp+1;
                hp=maxhp;
                mag=mag+1;
                cout << "You gained " << enmgold  << " Gold, " << enmxp << " Experience and leveled up! Your level is now " << lvl << "." << endl;
                cout << "-------------------------------\n";
            }
            else {
                cout << "You gained " << enmgold << " Gold and " << enmxp << " Experience." << endl;
                cout << "-------------------------------\n";
            }
    }
    }
}
