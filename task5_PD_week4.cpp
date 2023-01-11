#include<iostream>
#include<windows.h>
using namespace std;
void printm();
void printo();
void printh();
void prints();
void printi();
void printn();
void gotoxy(int,int);
int main(){
system("cls");
printm();
printo();
printh();
prints();
printi();
printn();

}
void gotoxy(int x, int y )
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void printm(){
gotoxy(20,19);
cout<<"* *       * *";
gotoxy(20,20);
cout<<"*  *     *  *";
gotoxy(20,21);
cout<<"*   *   *   *";
gotoxy(20,22);
cout<<"*    * *    *";
gotoxy(20,23);
cout<<"*     *     *";
gotoxy(20,24);
cout<<"*           *";
gotoxy(20,25);
cout<<"*           *";
gotoxy(20,26);
cout<<"*           *";
gotoxy(20,27);
cout<<"*           *";


}
void printo(){
gotoxy(33,19);
cout<<" *********"<<endl;
gotoxy(33,20);
cout<<" *       *"<<endl;
gotoxy(33,21);
cout<<" *       *"<<endl;
gotoxy(33,22);
cout<<" *       *"<<endl;
gotoxy(33,23);
cout<<" *       *"<<endl;
gotoxy(33,24);
cout<<" *       *"<<endl;
gotoxy(33,25);
cout<<" *       *"<<endl;
gotoxy(33,26);
cout<<" *       *"<<endl;
gotoxy(33,27);
cout<<" *********"<<endl;

}


void printh(){
gotoxy(43,19);
cout<<" *       *"<<endl;
gotoxy(43,20);
cout<<" *       *"<<endl;
gotoxy(43,21);
cout<<" *       *"<<endl;
gotoxy(43,22);
cout<<" *       *"<<endl;
gotoxy(43,23);
cout<<" *********"<<endl;
gotoxy(43,24);
cout<<" *       *"<<endl;
gotoxy(43,25);
cout<<" *       *"<<endl;
gotoxy(43,26);
cout<<" *       *"<<endl;
gotoxy(43,27);
cout<<" *       *"<<endl;

}
void prints(){
gotoxy(52,19);
cout<<"############";
gotoxy(52,20);    
cout<<"#           ";   
gotoxy(52,21);
cout<<"#           ";
gotoxy(52,22);
cout<<"#           ";
gotoxy(52,23);
cout<<"#           ";
gotoxy(52,24);
cout<<"############";    
gotoxy(52,25);
cout<<"           # ";
gotoxy(52,26);
cout<<"           # ";
gotoxy(52,27);
cout<<"           # ";
gotoxy(52,28);
cout<<"           # ";
gotoxy(52,29);
cout<<"           # ";
gotoxy(52,30);
cout<<"############";
}

void printi(){
gotoxy(64,19);
cout<<" ##"<<endl;
gotoxy(64,21);
cout<<" ##"<<endl;
gotoxy(64,22);
cout<<" ##"<<endl;
gotoxy(64,23);
cout<<" ##"<<endl;
gotoxy(64,24);
cout<<" ##"<<endl;
gotoxy(64,25);
cout<<" ##"<<endl;
gotoxy(64,26);
cout<<" ##"<<endl;
gotoxy(64,27);
cout<<" ##"<<endl;
gotoxy(64,28);
cout<<" ##"<<endl;

}
void printn(){
gotoxy(64,19);
cout<<" #               #   "<<endl;
gotoxy(64,20);
cout<<" # #             # " <<endl;
gotoxy(64,20);
cout<<" #   #           # "<<endl;
gotoxy(64,20);
cout<<" #     #         #  "<<endl;
gotoxy(64,20);
cout<<" #       #       #  "<<endl;
gotoxy(64,20);
cout<<" #         #     #   "<<endl;
gotoxy(64,20);
cout<<" #           #   #    "<<endl;
gotoxy(64,20);
cout<<" #             # #   "<<endl;
gotoxy(64,20);
cout<<" #               #  "<<endl;






}



