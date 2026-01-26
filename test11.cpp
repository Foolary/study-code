#include <iostream>
using namespace std;


int main(){

/*int month;
cout << "enter the month (1-12)"<< '\n';
cin >> month;

 switch(month){

    case 1 : cout << "it is january";
    break;

    case 2:cout <<"it is febuary";
    break;

    case 3:cout <<"it is march";
    break;

    case 4:cout <<"it is april";
    break;

    case 5:cout <<"it is may";
    break;

    case 6:cout <<"it is june";
    break;

    case 7:cout <<"it is july";
    break;

    case 8:cout <<"it is august";
    break;

    case 9:cout <<"it is september";
    break;

    case 10:cout <<"it is october";
    break;

    case 11:cout <<"it is november";
    break;

    case 12:cout <<"it is december";
    break;

}*/
char grade;

cout << "what was your grade?"<<'\n';
cin >> grade;

switch(grade){
    case 'A': cout <<"you did an amazing job keep up the good work!!!";
    break;
     case 'B': cout <<"you did good";
    break;
     case 'C': cout <<"you did okay!";
    break;
     case 'D': cout <<"you need to pay aattention in class!!";
    break;
     case 'E': cout <<"you need a tutor";
    break;
     case 'F': cout <<"you aren't even in my class";
    break;
    default : cout<< "PLEASE ONLY ENTER A LETTER IN CAPS FROM A TO F";
    //default is any other case besides the ones mentionded

}


    return 0;
}

/*#include <iostream>
using namespace std;

int main (){

string name;
cout << "Enter your name ";
getline(cin,name);

/*if(name.length() > 12) {
   cout << "Your name may only contain 12 characters!!!"<< '\n';

} else {
   cout<< "Welcome "<<name;
}

if (name.empty()) {cout<<"you didn't enter anything";
}
else {cout<<"hello "<<name;}

name.clear();
cout <<"hello "<<name;

name.append("@gmail.com");
cout << "your gmail will be "<< name;

   return 0;
}