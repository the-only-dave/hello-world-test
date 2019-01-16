#include <iostream>
#include <fstream>
#include<cmath>
#include<iomanip>
using namespace std;
int random(int min, int max); //random number generator
int action(string act1); //action function while free roaming
int attack(); //attack function in combat
void shopping(double &gold, /*int cx,*/ string ix, double &swdstr, double &bowstr, double &magstr);

double xp,str,lvl,gold,spd,mag,hp,maxhp,classchoice;
double enmstr,enmlvl,enmspd,enmmag,enmhp,enmgold,enmxp;
double swdstr,bowstr,magstr,maghp;
string inp;
int i = 1;

int main ()
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

    int classpick;
    while(classchoice!=1)
    {
        cout << "-------------------------------\n" "Choose a class: \nKnight - 1\nArcher - 2\nWizard - 3\n" << "-------------------------------\n" << endl;
        cin >> classpick;
        if (classpick == 1){
            lvl=1; str=5; xp=0; gold=0; spd=2; mag=2;maxhp=15;gold=0;hp=maxhp;swdstr=2;bowstr=1;magstr=1;maghp=1;classchoice=1;
            cout << "-------------------------------\n" << "You chose Knight." << endl;
             printf("Stats: Level %.0f , %.0f Experience, %.0f of %.0f Health, %.0f Strength, %.0f Speed and  %.0f Magic.\n", lvl, xp, hp, maxhp, str, spd, mag);
            cout << "You can use the 'help' command at any time to see the current commands." << endl;
            cout << "-------------------------------\n";
        }
        if (classpick == 2){
            lvl=1; str=3; xp=0; gold=0; spd=5; mag=3;maxhp=13;gold=0;hp=maxhp;swdstr=1;bowstr=2;magstr=1;maghp=1;classchoice=1;
            cout << "-------------------------------\n" << "You chose Archer." << endl;
            cout << "Stats: " << lvl << " Level, " << xp << " Experience, " << hp << " of " << maxhp << " Health, " << str << " Strength, " << spd << " Speed, " << mag << " Magic." << endl;
            cout << "You can use the 'help' command at any time to see the current commands." << endl;
            cout << "-------------------------------\n";
        }
        if (classpick == 3){
            lvl=1; str=2; xp=0; gold=0; spd=5; mag=5;maxhp=10;gold=0;hp=maxhp;swdstr=1;bowstr=1;magstr=2;maghp=2;classchoice=1;
            cout << "-------------------------------\n" << "You chose Wizard" << endl;
            cout << "Stats: " << lvl << " Level, " << xp << " Experience, " << hp << " of " << maxhp << " Health, " << str << " Strength, " << spd << " Speed, " << mag << " Magic." << endl;
            cout << "You can use the 'help' command at any time to see the current commands." << endl;
            cout << "-------------------------------\n";
        }
    }
    while(int i=1){
        action(inp);

    }
}
int action(string act1)
{
    cout << "What do you want to do?" << endl;
    cin >> inp;

    if (inp=="help") cout << "Current commands: explore, attack, stats, help, shop, exit." << endl;
    if (inp=="stats") cout << gold << " " << swdstr << endl;
    if (inp=="attack") cout << "Can't do that right now!\n";
    if (inp=="exit") return 0;
    if (inp=="gold") gold=gold+9999;
    if (inp=="shop"){
        cout << "-------------------------------\n\n" << "Welcome to the shop!\n\n" << "Swords:\n" << "1 - Steel Sword - 100 gold\n2 - Silver Sword - 250 gold\n3 - Platinum Sword - 500 gold\n\n" << "Bows: \n" << "4 - Steel Bow - 100 gold\n5 - Silver Bow - 250 gold\n6 - Platinum Bow - 500 gold\n\n" << "Staves: \n" << "7 - Fire Staff - 100 gold\n8 - Blaze Staff - 250 gold\n9 - Inferno Staff - 500 gold\n\n";
        cout << "-------------------------------\n\n";
        shopping(gold,inp,swdstr, bowstr, magstr);
/*        if (inp=="1"){
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
        }*/
    }
    if(inp == "explore"){
        enmlvl=random(lvl-1,lvl+1);
        if (enmlvl<=0) enmlvl=1;
        cout << "Enemy level " << enmlvl;
        if (lvl>=1)enmstr=1;
        else if (lvl<1)enmstr=1+(enmlvl*0.25);
        if (lvl<=3) enmspd=lvl;
        else enmspd=3;
        enmmag=1;
        enmhp=10+(2*lvl);
        enmgold=lvl+1;
        enmxp=15;
}
}
int random(int min, int max) //range : [min, max)
{
   static bool first = true;
   if (first)
   {
      srand( time(NULL) ); //seeding for the first time only!
      first = false;
   }
   return min + rand() % (( max + 1 ) - min);
}
void shopping(double &gold, /*int cx,*/ string ix, double &swdstr, double &bowstr, double &magstr) //gold, idk, input, equip name, equip temporary strength
{
    cout << "-------------------------------\n\n" << "Welcome to the shop!\n\n" << "Swords:\n" << "1 - Steel Sword - 100 gold\n2 - Silver Sword - 250 gold\n3 - Platinum Sword - 1000 gold\n\n" << "Bows: \n" << "4 - Steel Bow - 100 gold\n5 - Silver Bow - 250 gold\n6 - Platinum Bow - 1000 gold\n\n" << "Staves: \n" << "7 - Fire Staff - 100 gold\n8 - Blaze Staff - 250 gold\n9 - Inferno Staff - 1000 gold\n\n";
    cout << "-------------------------------\n\n";
    cin >> ix;
    if (ix=="1" || ix=="4" || ix=="7"){
        if (gold < 100) cout << "You don't have enough gold for that!\n";
        if (gold >= 100){
            gold=gold-100;
            if(ix=="1") swdstr=3;
            if(ix=="4") bowstr=3;
            if(ix=="7") magstr=3;
            cout << "Thank you for the business. See anything else you might like?\n";
        }
    }
    if (ix=="2" || ix=="5" || ix=="8"){
        if (gold < 250) cout << "You don't have enough gold for that!\n";
        if (gold >= 250){
            gold=gold-250;
            if(ix=="2") swdstr=5;
            if(ix=="5") bowstr=5;
            if(ix=="8") magstr=5;
            cout << "Thank you for the business. See anything else you might like?\n";
        }
    }
     if (ix=="3" || ix=="6" || ix=="9"){
        if (gold < 1000) cout << "You don't have enough gold for that!\n";
        if (gold >= 1000){
            gold=gold-1000;
            if(ix=="3") swdstr=7;
            if(ix=="6") bowstr=7;
            if(ix=="9") magstr=7;
            cout << "Thank you for the business. See anything else you might like?\n";
        }
    }

}


/*to-do:
-condense shopping (done)
-condense combat and add dodging/casting/healing
-add items
-make enemy generation a function instead of being within the actual explore command
-experiment with art for the stuff
*/
