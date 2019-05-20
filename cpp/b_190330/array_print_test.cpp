#include<iostream>
#include<vector>

using namespace std;

void print(int (&arr)[10]);

int main()
{
	int name[9]= {1,2,3,4,5,6,7,8,9}; 
	print(name);
	return 0;
}

void print(int (&arr)[10])
{
	for(auto elem : arr)
		cout<<elem<<endl;
}
