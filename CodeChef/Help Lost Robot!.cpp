#include<iostream>
using namespace std;
int main()
{
	int t,x1,x2,y1,y2;
	cin>>t;
	while(t--)
	{
	cin>>x1>>y1>>x2>>y2;
	if(x1==x2)
		{ 
				if(y1>y2)
				cout<<"down"<<endl;
				else
				cout<<"up"<<endl;		
		}
		
	else if(y1==y2)
		{
			if(x1>x2)
			cout<<"left"<<endl;
			else
			cout<<"right"<<endl;
		}
		else
		cout<<"sad"<<endl;
	}	
}
