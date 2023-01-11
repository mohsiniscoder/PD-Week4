#include<iostream>
using namespace std;
void printmenu();
void aggreagate (string,int,int,int);
void compare (string,int,string,int);
main()
{
int matric,inter,ecat;
int option;
int ecat1;
int ecat2;
string name1;
string name2;
string name;
while (true){
printmenu();
cout<<"Press 1 for Entering Checking the aggregate\nPress 2 for Comparing Students Based on their ECAT Marks ";
cin>>option;
if (option == 1)
{
cout<<"Enter Name = ";
cin>>name;
cout<<"Matric Marks=";
cin>>matric;
cout<<"inter Marks=";
cin>>inter;
cout<<"ECAT Marks=";
cin>>ecat;
aggreagate(name,matric,inter,ecat);

}
if (option ==2)
{
cout<<"Enter The Name of the student=";
cin>> name1;
cout<<"Enter ECAT Marks of "<<name1<<" =";
cin>>ecat1;
cout<<"Enter The Name of the student=";
cin>> name2;
cout<<"Enter ECAT marks of "<<name2<<" =";
cin>>ecat2;
compare (name1,ecat1,name2,ecat2);
}
}
}
void printmenu(){
cout<<"    # # ### ### # # ### ##   ##  ### ### # #    #   ##   # # ###   ##   ## ###   #  ###                "<<endl;
cout<<"    # # # #  #  # # #   # # #     #   #  # #   # #  #  # ###  #   #    #    #   # # # #                "<<endl;
cout<<"    # # # #  #  # # ##  ##   #    #   #   #    ###  #  # ###  #    #    #   #   # # # #                "<<endl;
cout<<"    # # # #  #  # # #   # #   #   #   #   #    # #  #  # # #  #      #   #  #   # # # #                "<<endl;
cout<<"    ### # # ###  #  ### # # ##   ###  #   #    # #  ##   # # ###   ##  ##  ###   #  # #                "<<endl;
cout<<"                                                                                                       "<<endl;
cout<<"    # #  #  ###   #    ##  ### # # ### ### ###   ##  # #   ## ### ### # #                               "<<endl;
cout<<"    ### # # # #  # #  #    #   ### #   # #  #   #    # #  #    #  #   ###                               "<<endl;
cout<<"    ### ### # #  ###  # #  ##  ### ### # #  #    #    #    #   #  ##  ###                                    "<<endl;
cout<<"    # # # # # #  # #  # #  #   # # #   # #  #     #   #     #  #  #   # #                                  "<<endl;
cout<<"    # # # # # #  # #   ##  ### # # ### # #  #   ##    #   ##   #  ### # #                                     "<<endl;
cout<<"                                                                                                       "<<endl;
}
void aggreagate(string name,int matric,int inter,int ecat){        
float matric_per = (matric/1100.0) * 100; 
float inter_per = (inter/550.0) * 100;
float ecat_per = (ecat/400.0) * 100;
float aggreagate_uet = (matric_per*0.30)+(inter_per*0.30)+(ecat_per*0.40);
cout<<"Aggreagate of "<<name<<" is "<<aggreagate_uet<<"\n";

}
void compare (string name1,int ecat1,string name2, int ecat2)
{
if (ecat1 > ecat2 ){
cout<<"Roll Number 1 = "<<name1<<"\nRoll Number 2 = "<<name2;

}
else 
{
    cout<<"Roll Number 1 = "<<name2<<"\nRoll Number 2 = "<<name1;
}
}





