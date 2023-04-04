#pragma once
#include <iostream>

using namespace std;

template <class T> 
class clsDynamicArray
{
	short _Size = 0;

public:
	T* OriginalArray;

	clsDynamicArray(short Size) {
		if (Size <= 0) Size = 0;

		_Size = Size;

		OriginalArray = new T[_Size];
	}

	~clsDynamicArray() {
		delete[] OriginalArray;
	}

	bool SetItem(short Index, T Value) {
		if (Index < 0 || Index >= _Size) return false;
		OriginalArray[Index] = Value;
		return true;
	}

	void PrintList() {

		for (int i = 0; i < _Size; i++) {
			cout << OriginalArray[i] << " ";
		}
		cout << endl;
	}

	short Size() {
		return _Size;
	}

	bool IsEmpty() {
		return _Size == 0;
	}

};

