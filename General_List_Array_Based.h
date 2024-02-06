#pragma once
template <typename List_Entry, int Max_Size>
struct List {
	int Size;
	List_Entry Entry[Max_Size];
};
template <typename List_Entry, int Max_Size>
void List_Initialze(List<List_Entry, Max_Size>* pl) {
	pl->Size = 0;
}
template <typename List_Entry, int Max_Size>
int List_Size(List<List_Entry, Max_Size>* pl) {
	return pl->Size;
}
template <typename List_Entry, int Max_Size>
bool  List_Empty(List<List_Entry, Max_Size>* pl) {
	return !pl->Size;
}
template <typename List_Entry, int Max_Size>
bool List_Full(List<List_Entry, Max_Size>* pl) {
	return pl->Size == Max_Size;
}
template <typename List_Entry, int Max_Size>
void List_Destroy(List<List_Entry, Max_Size>* pl) {
	pl->Size = 0;
}
template <typename List_Entry, int Max_Size>
void List_Replace(int pos, List_Entry e, List<List_Entry, Max_Size>* pl) {
	pl->Entry[pos] = e;
}
template <typename List_Entry, int Max_Size>
void List_Retrieve(int pos, List_Entry* pe, List<List_Entry, Max_Size>* pl) {
	*pe = pl->Entry[pos];
}
template <typename List_Entry, int Max_Size>
void List_Traverse(List<List_Entry, Max_Size>* pl, void (*pf)(List_Entry e)) {
	for (int i = 0; i <= pl->Size - 1; i++)
		(*pf)(pl->Entry[i]);
}
template <typename List_Entry, int Max_Size>
void List_Insert(int pos, List_Entry e, List<List_Entry, Max_Size>* pl) {
	//pre-conditions
	//1-list created and initialize
	//2-list not full;
	//3  0<=postion of insert_element<= size;
	//pos-conditions
	//1- all element from postion to size -1 are shifting one position
	// element already inserted

	for (int i = pl->Size - 1; i >= pos; i--)
		pl->Entry[i + 1] = pl->Entry[i];
	pl->Entry[pos] = e;
	pl->Size++;
}
template <typename List_Entry, int Max_Size>
void List_Delete(int pos, List_Entry* pe, List<List_Entry, Max_Size>* pl) {
	//pre-conditions
	//1-list created and initialize
	//2-list not empty;
	//3  0<=postion of insert_element<= size-1;
	//pos-conditions
	//1- all element from postion+1  to  size -1  are back one position
	// element already retrieve
	*pe = pl->Entry[pos];
	for (int i = pos + 1; i <= pl->Size - 1; i++)
		pl->Entry[i - 1] = pl->Entry[i];
	pl->Size--;
}
template <typename List_Entry, int Max_Size>
void List_Insert_Ordering(List_Entry e, List<List_Entry, Max_Size>* pl) {
	List_Entry temp;
	int current;
	for (current = 0; current <= pl->Size - 1; current++) {
		if (List_Empty(pl))
			break;
		else {
			List_Retrieve(current, &temp, pl);
			if (temp >= e)break;
		}
	}
	List_Insert(current, e, pl);
}
//implement binary search function and sequential search function 
template <typename List_Entry, int Max_Size>
int Sequential_Search(List_Entry e, List<List_Entry, Max_Size>* pl) {
	int Current, Size = List_Size(pl);
	List_Entry Temp;
	for (Current = 0; Current < Size; Current++) {
		List_Retrieve(Current, &Temp, pl);
		if (Temp == e) return Current;;
	}
	return -5;
}