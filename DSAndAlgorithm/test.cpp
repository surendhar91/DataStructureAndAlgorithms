#include <stdio.h>
#include <string.h>
#include <iostream>
#include <map>
#include <utility>
using namespace std;
int main(int argc, char **argv)
{
	/*printf("hello world\n");
	map<string,string> Employees;
	Employees["surendhar"]="Zoho";
	for( map<string, string>::iterator ii=Employees.begin(); ii!=Employees.end(); ++ii)
	{
	       cout<<(*ii).first<<(*ii).second<<endl;
	}*/
	int *arr=new int[10];
	for(int i=0;i<10;i++)
		cout<<arr[i]<<"\n";
	delete [] arr;
	arr=NULL;
}
