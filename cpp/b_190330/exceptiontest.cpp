#include<iostream>
#include<stdexcept>

using namespace std;

int main() 
{
	try{
		cout<<"hello World!\n";
		throw runtime_error("Null");
	}
	catch (runtime_error err)
	{
		cout<<"Null exception caught"<<endl;
		cout<<err.what()<<endl;
	}
	return 0;
}

