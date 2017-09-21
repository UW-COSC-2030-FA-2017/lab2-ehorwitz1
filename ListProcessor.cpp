// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cows.insertAsFirst(9.25);

	cout << "cows insterted as first list  :  " << cows << endl << endl;

	cout << "cows count: "<<cows.getSize()<<endl;
	cout << "cows sum: " << cows.sum()<< endl;

	cows.insertAsLast(3.2);
	cows.insertAsLast(2.2);
	cows.insertAsLast(4.32);
	cout << "cows inserted as last list  :  " << cows << endl << endl;


	cout << "cows count: " << cows.getSize() << endl;
	cout << "cows sum: " << cows.sum() << endl;



	cows.removeFirst();
	cows.removeFirst();
	cows.removeFirst();

	cout << "cows remove first list  :  " << cows << endl << endl;
	cout << "cows count: " << cows.getSize() << endl;
	cout << "cows sum: " << cows.sum() << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;

	cout << "cows count: " << cows.getSize() << endl;
	cout << "cows sum: " << cows.sum() << endl;
	cout << "horses count: " << horses.getSize() << endl;
	cout << "horses sum: " << horses.sum() << endl;



	horses.insertAsFirst(9.67);
	horses.insertAsFirst(1.43);
	horses.insertAsFirst(7.64);


	cout << "horses insert as first list:  " << horses << endl << endl;
	cout << "horses count: " << horses.getSize() << endl;
	cout << "horses sum: " << horses.sum() << endl;

	horses.insertAsLast(9.67);
	horses.insertAsLast(1.43);
	horses.insertAsLast(7.64);


	cout << "horses insert as last list:  " << horses << endl << endl;
	cout << "horses count: " << horses.getSize() << endl;
	cout << "horses sum: " << horses.sum() << endl;




	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "pigs count: " << pigs.getSize() << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "pigs count: " << pigs.getSize() << endl;


	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "pigs count: " << pigs.getSize() << endl;

	pigs.insertAsLast(4.30);
	pigs.insertAsLast(2.47);

	cout << "pigs insert as last list  :  " << pigs << endl << endl;
	cout << "pigs insert as last count: " << pigs.getSize() << endl;


	cout << "End of code" << endl;


	return 0;
}
