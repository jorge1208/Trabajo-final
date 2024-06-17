#include <iostream>
#include <string>
using namespace std;
int main()
{	
	int a;
	cin>>a;
	for (int i {0}; i < a ; i++)
	{
		int b;
		cin>>b;
		string s;
		cin>>s;
		int counter{0};
		for(int j = 0; j<b ; j++)
		{
			if(s[j]=='1')
			{
				if(counter % 2 == 0)
				{
					if(j != 0){
					cout<<"+";}
				}
				else
				{
					cout<<"-";
				}
				counter++;
			}
			else
			{
				if( j != 0)
				{
				cout<<"+";
				}
			}
		}	
		cout<<"\n";

	}
	


	return 0; 
}