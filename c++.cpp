#include <iostream>
#include <chrono>
#include <thread>
#include <cstring>
using namespace std;



void delayer(const char* s, int delay = 100)
{
    for(int i = 0; s[i] != '\0' ; i++)
    {
        cout << s[i] << flush;
        this_thread::sleep_for(chrono::milliseconds(delay));    
    }
    cout << endl;
}   
void delayernospace(const char* j, int delays = 100)
{
    for(int i = 0; j[i] != '\0'; i++)
    {
        cout << j[i] << flush;
        this_thread::sleep_for(chrono::milliseconds(delays));
    }
}

int main()
{
 delayer("          This Is Horror Text based game adventure          ");
 delayernospace("Rules\n1- Dont Make any Wrong Choices\n2- ");
 delayer("DON'T MAKE HIM ANGRY", 500);
 char d;
 delayer("Start? [y/n]");
 cin >> d;
 if(d == 'y' or d == 'Y')
 {
    delayer("You Were On An AirPlane and Suddenly");
    delayer("(People Screaming) Yeah The Airplane Is Falling On A Jungle");
    delayer("");
 }else if(d == 'N' or d == 'n')
 {
    delayer("Goodbye");
 }
 system("pause");
}