#include<iostream>
using namespace std;
class human{
 public:
 //properites of human class
 int age;
 char gender;

//  human(){
//     // this->age=age;
//     //  this->gender=gender;
//  }
//  human(int age){
//      this->age=age;
//  }
 human(int age=1,char gender='M')
{
    this->age=age;
    this->gender=gender;
}
// human(char gender){
//     this->gender=gender;
// }
};
int main(){
human ramesh;
cout<<ramesh.age<<" "<<ramesh.gender<<endl;

human *suresh=new human;
cout<<suresh->age<<" "<<suresh->gender<<endl;

human mahesh(7);
cout<<mahesh.age<<" "<<mahesh.gender<<endl;

human b(8,'m');
cout<<b.age<<" "<<b.gender<<endl;

human c(0,'k');
cout<<c.age<<" "<<c.gender<<endl;

    return 0;
}