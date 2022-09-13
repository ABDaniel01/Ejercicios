//Ejercicio 18
#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;

int main(){
	vector<int> nums;
	nums.push_back(24);
	nums.push_back(81);
	nums.push_back(57);
	nums.push_back(35);
	nums.push_back(98);
	nums.push_back(1248);
	nums.push_back(85544);
	
	for(int x:nums){
		cout<<x<<endl;
	}
	
	system("pause");
	return 0;
}
