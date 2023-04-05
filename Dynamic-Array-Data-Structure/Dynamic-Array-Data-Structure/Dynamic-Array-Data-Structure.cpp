#include <iostream>
#include "clsDynamicArray.h"

using namespace std;

int main()
{

    clsDynamicArray <int> MyDynamicArray(5);

    MyDynamicArray.SetItem(0, 10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);

    cout << "\nIs Empty?  " << MyDynamicArray.IsEmpty();
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items: \n";

    MyDynamicArray.PrintList();


    //Resize Array
    /*cout << "\nResizing array to 2" << endl;
    MyDynamicArray.Resize(2);
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items: \n";
    MyDynamicArray.PrintList();

    cout << "\nResizing array to 10" << endl;
    MyDynamicArray.Resize(10);
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items: \n";
    MyDynamicArray.PrintList();*/


    //Get Item by index , Reverse and Clear Array Features

    cout << "\nItem at index 1:"<<MyDynamicArray.GetItem(1) << endl;

    cout << "\nReverse Array" << endl;
    MyDynamicArray.Reverse();
    MyDynamicArray.PrintList();

    cout << "\Clear Array" << endl;
    MyDynamicArray.Clear();
    MyDynamicArray.PrintList();



    system("pause>0");

}