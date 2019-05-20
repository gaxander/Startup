#include<iostream> 

using namespace std; 

int main() 
{
	int i_name = 1234;
	int c_name = static_cast<char>(i_name);
	cout<<"i_name="<<i_name<<endl;
	cout<<"c_name="<<c_name<<endl;
	return 0;
} 
