#pragma once
#include <iostream>
#include <cstring> 
using namespace std;

class Worker
{

    string name;
    string printText;

public:
    Worker(string n = " ", string t = " ") : name(n), printText(t) {}

    string getName() const
    {
        return name;
    }

    string getText() const
    {
        return printText;
    }

    void PrintInfo() const
    {
        cout << "Worker: " << name << " sent: " << printText << endl;
    }
};