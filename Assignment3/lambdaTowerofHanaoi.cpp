/* Solving Tower of Hanoi puzzle using Lambda Expressions */

#include <iostream>
#include <functional>
using namespace std;

int main()
{
    std::function<void(int,char,char,char)> hanoi;
    hanoi=[&hanoi](int a,char from,char aux,char to)  {
        if(a==1){
           cout<<"\t\tMove disc 1 from "<<from<<" to "<<to<<"\n";
           return;
        }
        else{
           hanoi(a-1,from,to,aux);
           cout<<"\t\tMove disc "<<a<<" from "<<from<<" to "<<to<<"\n";
           hanoi(a-1,aux,from,to);
        }
    };
    cout<<"hanoi(8): "<<endl;
     hanoi(8,'A','B','C');
}
