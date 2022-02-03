// prog to print hello world using class-->


#include<iostream>
using namespace std;

class temp
{

public:
    void hello()
    {
        cout << "hello world" << endl;
    }


    void my_hello(int age);




};


// scope :: resolution-->
// adding parameters-->
void temp::my_hello(int age){

    cout << "your age :" << endl;
    cout << age << endl;
}

// main function--->



int main(){

    temp tmp;

    tmp.my_hello(10);


    return 0;





}