#include <iostream>
#include <Windows.h>
#include <string>
#include<vector>
#include <string>
#include "List.cpp"
#include "Node.h"

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Polish");
    
    List<int> *myList = new List<int>();
    for (int i = 0; i < 5; i++) {
        myList->addBegin();
    };
    
    myList->addEnd();
    myList->showAll();
    int a = 14;
    int m = myList->findNodeNr(a);
    if (m) {
        cout << "Element nr " << a << " to: " << m << endl;
    }
    myList->newValueNr(a, 2); 
    myList->showAll();
    int f = myList->findNodeNr(a);
    cout << "Element nr " << a << " to: " << f << endl;
    
    //myList->showAll();
}