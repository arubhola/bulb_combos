#include <string>
#include <iostream>

using namespace std;

char color[] = {'W', 'Y',  'V', 'H'};
const int SIZE = 4;

void bulbCombo(int n, string str)
{
	if(n==0)
	{
		cout<<str<<endl;
		return;
	}
	for (int i = 0; i < SIZE; i++)
	{
		bulbCombo(n-1, str+color[i]);
		//bulbCombo(n-1, str+'R');
		//bulbCombo(n-1, str+'Y');
	}
}

int main()
{
    int n;
	cout<<"\nEnter number of variables: ";
	cin>>n;
	string str;
	bulbCombo(n, str);
    system("pause");
	return 0;
}