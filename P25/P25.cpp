#include<iostream>
#include<cstdlib>

using namespace std;

void staticArrayInit(void);
void automaticArrayInit(void);
int addbyone(int &xref);

int main()
{
	int x=100;
	int y=addbyone(x);
	cout << "x = " << x << endl;
	system("Pause");
	return 0;
}

int addbyone(int &xref)
{
	xref++;
	cout << "xref = " << xref << endl; 
	return xref;
}
