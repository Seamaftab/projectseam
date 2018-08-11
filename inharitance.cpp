#include<bits/stdc++.h>
#include<windows.h>
void gotoXY(int x, int y){
    HANDLE hStdout;
    COORD destCoord;
    hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

    //position cursor at start of window
    destCoord.X = x;
    destCoord.Y = y;
    SetConsoleCursorPosition(hStdout, destCoord);
}
using namespace std;
void line(int x1,int y1,int x2,int y2,char ch){
    double m=(y2-y1)/(double)(x2-x1);
    double c=y2-m*x2;
    for(int i =x1; i<=x2; i++)
    {
        int y = m*i + c;
        gotoXY(i,y);
        cout<<ch;
    }

}
int main(){

    for(int i=0;i<60;i++){
        for(int j=0;j<50000000;j++);
        line(1+i,0,10+i,0,' ');
        line(1+i+1,0,10+i+1,0,'*');
    }

}
