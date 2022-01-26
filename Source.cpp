#include<iostream>
#include"BinaryTree.h"

using namespace std;

int main()
{
	BinaryTree<int> BT;

	for (auto i = 0; i < 10; i++)
		BT.Insert(i + 1);

	BinaryTree<int> BT1 = BT;

	BT.Replace(4, 14);
	BT.Remove(1);

	BinaryTree<int>::BFIterator it;

	for (it=BT.begin(); !it.end(); it++)
		cout << *it << "  ";

	cout << endl;

	for (it = BT1.begin(); !it.end(); it++)
		cout << *it << "  ";

	cout << endl;
	
	BinaryTree<int>::DFIterator dfit;

	for (dfit = BT1.begin(); !dfit.end(); dfit++)
		cout << *dfit << "  ";
		
}