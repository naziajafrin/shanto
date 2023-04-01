#include<iostream>
using namespace std;

class employee{

    private:
    char name;
    int age;
    char company;

    public:

    void getset( char a, int i, char c){
        name = a;
        age = i;
        company = c;

        
    }

    void getInput(){
        
        cin >> name;
        cin >> age;
        cin >> company;

    }


   
};

int main(){

    employee e1,e2;

    e1.getInput();
    e2.getInput();

    e1.Display();
    e2.Display();
}