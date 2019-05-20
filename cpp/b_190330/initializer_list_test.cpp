#include<iostream>
#include<initializer_list>
#include<string>

using namespace std; 

void er_m(initializer_list<string> il);

int main()
{
	er_m({"nanjing","beijing","heping"});
	return 0;
}

void er_m(initializer_list<string> il){
	for(auto index = il.begin();index <il.end();index ++)
		cout<<*index <<" ";
}
