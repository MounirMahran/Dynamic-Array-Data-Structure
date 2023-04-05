#pragma once
#include <iostream>

using namespace std;

template <class T> 
class clsDynamicArray
{
	short _Size = 0;
	T* TempArray;

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

	void Resize(short NewSize) {
		TempArray = new T[NewSize];

		_Size = NewSize;
		for (short i = 0; i < _Size; i++) TempArray[i] = OriginalArray[i];
		delete[] OriginalArray;

		OriginalArray = TempArray;


	}

	T GetItem(short Index) {
		if (Index < 0 || Index >= _Size) return 0;
		return OriginalArray[Index];
	}

	void Reverse() {
		TempArray = new T[_Size];
		for (short i = 0; i < _Size; i++) TempArray[i] = OriginalArray[_Size - i - 1];
		
		delete[] OriginalArray;
		OriginalArray = TempArray;
	}

	void Clear() {
		_Size = 0;
		delete[] OriginalArray;
	}

	bool Delete(short Index) {
		if (Index < 0 || Index >= _Size) return false;

		for (short i = Index; i < _Size; i++) OriginalArray[i] = OriginalArray[i + 1];

		Resize(_Size - 1);

		return true;
	}

};

