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
   /* cout << "\nItem at index 1:"<<MyDynamicArray.GetItem(1) << endl;

    cout << "\nReverse Array" << endl;
    MyDynamicArray.Reverse();
    MyDynamicArray.PrintList();

    cout << "\Clear Array" << endl;
    MyDynamicArray.Clear();
    MyDynamicArray.PrintList();*/

    //Delete Item by index
   /* cout << "\nDelete item at index 3" << endl;
    MyDynamicArray.Delete(3);
    MyDynamicArray.PrintList();*/

    //Delete First and Last Item
    /*cout << "\nDelete First Item" << endl;
    MyDynamicArray.DeleteFirstItem();
    MyDynamicArray.PrintList();

    cout << "\nDelete Last Item" << endl;
    MyDynamicArray.DeleteLastItem();
    MyDynamicArray.PrintList();*/

    //Find, Delete Item By Value
    /*cout << "\nFind Index Of Item 30: " << endl;
    cout << MyDynamicArray.Find(30) << endl;


    cout << "\nDelete Item 40:" << endl;
    MyDynamicArray.DeleteItem(40);
    MyDynamicArray.PrintList();*/

    //Insert At Feature
    cout << "Inserting 10 at index 2" << endl;
    MyDynamicArray.InsertAt(2, 10);
    MyDynamicArray.PrintList();




    system("pause>0");

}