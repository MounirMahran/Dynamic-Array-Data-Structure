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
    /*cout << "Inserting 10 at index 2" << endl;
    MyDynamicArray.InsertAt(2, 10);
    MyDynamicArray.PrintList();*/


    //Insert At (Beginning, After, Before, End) Features
    MyDynamicArray.InsertAtBeginning(400);
    cout << "\n\nArray after insert 400 at Begining:";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();

    MyDynamicArray.InsertBefore(2, 500);
    cout << "\n\nArray after insert 500 before index 2:";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();

    MyDynamicArray.InsertAfter(2, 600);
    cout << "\n\nArray after insert 600 after index 2:";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();


    MyDynamicArray.InsertAtEnd(800);
    cout << "\n\nArray after insert 800 at End:";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();




    system("pause>0");

}