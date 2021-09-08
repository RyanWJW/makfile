#include<iostream>
#include"../include/add.h"
#include"../include/sub.h"
#include"../include/mut.h"
#include"../include/div.h"

using namespace std;

int main(int argc,char** argv)
{
	int a=atoi(argv[1]);
	int b=atoi(argv[2]);

	cout<<add(a,b)<<endl;
	cout<<sub(a,b)<<endl;
	cout<<mut(a,b)<<endl;
	cout<<div1(a,b)<<endl;
	return 0;
}