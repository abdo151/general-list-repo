#include <iostream>
using namespace std;
#include"General_List_Array_Based.h"
void display(int x) {
	cout << x << "\n";
}
int main()
{
	List<int, 10> DigitList;
	List_Initialze(&DigitList);
	//for (int i = 1, pos=0; pos< 10; i *= 2) {
	//	if (!List_Full(&DigitList))
	//		List_Insert(pos, i, &DigitList);
	//	else break;
	//}
	List_Insert_Ordering(10, &DigitList);
	List_Insert_Ordering(9, &DigitList);
	List_Insert_Ordering(6, &DigitList);
	List_Insert_Ordering(5, &DigitList);
	List_Insert_Ordering(1, &DigitList);
	List_Traverse(&DigitList, &display);
	cout << "\n*****************\n";
	List_Insert_Ordering(2, &DigitList);
	List_Insert_Ordering(3, &DigitList);
	List_Insert_Ordering(7, &DigitList);
	List_Insert_Ordering(4, &DigitList);
	List_Insert_Ordering(8, &DigitList);
	cout << "\n*****************\n";
	List_Traverse(&DigitList, &display);
	cout << "\n*****************\n";
	cout << Sequential_Search(2, &DigitList) << "\n";
	cout << Sequential_Search(9, &DigitList) << "\n";
	cout << Sequential_Search(434, &DigitList) << "\n";
	cout << Sequential_Search(-8, &DigitList) << "\n";
	cout << "the task is done successfully\n";
	cout << "\n*****************\n";
	cout << "\n*****************\n";
	cout << Rec_Binary_Search(2, &DigitList) << "\n";
	cout << Rec_Binary_Search(9, &DigitList) << "\n";
	cout << Rec_Binary_Search(434, &DigitList) << "\n";
	cout << Rec_Binary_Search(-8, &DigitList) << "\n";
	cout << "the task is done successfully\n";
	cout << "\n*****************\n";
	cout << "\n*****************\n";
	cout << Iter_Binary_Search(2, &DigitList) << "\n";
	cout << Iter_Binary_Search(9, &DigitList) << "\n";
	cout << Iter_Binary_Search(434, &DigitList) << "\n";
	cout << Iter_Binary_Search(-8, &DigitList) << "\n";
	cout << "the task is done successfully\n";
	cout << "\n*****************\n";
	
	system("pause>0");
}
