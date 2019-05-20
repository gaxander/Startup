#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main()
{
	string name("zhouqing");
	char cName[16];
	strcpy(cName,name.c_str());
	cout<<"length of name.c_str() is "<<strlen(cName)<<endl;
	cout<<cName<<endl;
	return 0;
}

