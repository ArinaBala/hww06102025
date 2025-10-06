#include <iostream>
#include <cstring> 
#include "Worker.h"
#include "Queue.h"
using namespace std;

int main()
{
    Queue myPrinterQueue(5);

    Worker w1("Diana", "math test");
    Worker w2("Taras", "history test");
    Worker w3("Arina", "english test");


    myPrinterQueue.Add(w1);
    myPrinterQueue.Add(w2);
    myPrinterQueue.Add(w3);
    myPrinterQueue.PrintQueue();

    cout << "\nMaking firstt document...\n";
    Worker done = myPrinterQueue.Extract();
    done.PrintInfo();

    cout << "\nAfter printing:\n";
    myPrinterQueue.PrintQueue();

    return 0;
}