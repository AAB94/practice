#include <bits/stdc++.h>
using namespace std;
int main(){
	map<int,int> table;
	table[1] = 100;
	table[2] = 200;
	table[4] = 400;
	table[5] = 500;
	map<int,int>::iterator lw,up;
	//lw = table.lower_bound(3);
	up = table.upper_bound(3);

	cout<<up->first<<endl;
	--up;
	cout<<up->first<<endl;
	return 0;
}