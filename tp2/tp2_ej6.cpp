

/*6.	Construya un programa que genere la siguiente serie: 1, 5, 3, 7, 5, 9, 7, ..., 23 
hasta llegar al número más próximo al 100.
/*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i, count;
    count=97;
    cout<<"1, "<<endl;
    for ( i = 1; i < count; i= i+2){
        cout<<i+4<<", "<<endl; 
        cout<<i+2<<", "<<endl;
    }
    cout<<endl;
    return 0;
}






























