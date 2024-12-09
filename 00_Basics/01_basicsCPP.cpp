#include <iostream>
// using namespace std;

//! Also can use like 
using std::cout;
using std::endl;


//TODO: Write custom namespace
namespace customNamespace
{
    void display()
    {
        // do something
    }
}

int main()
{
    // cout << "Hello World !!" << endl;
    std::cout << "Hello World !!" << std::endl;

    //TODO: use Custom Namespace
    customNamespace::display();
}