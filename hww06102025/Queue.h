#pragma once
#include "Worker.h"
#include <iostream>
#include <cstring> 
using namespace std;

class Queue
{
	Worker* arr;
	int maxCount;
	int count;

public:
	Queue(int size = 10)
	{
		maxCount = size;
		arr = new Worker[maxCount];////
		count = 0;
	}

	~Queue()
	{
		delete[] arr;
	}

	bool isEmpty() const
	{
		return count == 0;
	}

	bool isFull() const
	{
		return count == maxCount;
	}

	void Add(const Worker& obj)
	{
		if (isFull())
		{
			cout << "Full!\n";
			return;
		}
		arr[count++] = obj;
	}

	Worker Extract()
	{
		if (isEmpty())
		{
			cout << "The queue is full\n";
			return Worker();
		}
		Worker temp = arr[0];
		for (int i = 0; i < count - 1; ++i)
		{
			arr[i] = arr[i + 1];
		}
		count--;
		return temp;

	}

	void Clear()
	{
		count = 0;
	}

	void PrintQueue() const
	{
		cout << "The queue:\n";

		for (int i = 0; i < count; ++i)
		{
			arr[i].PrintInfo();
		}
	}

};