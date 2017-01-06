#include<iostream>
#include<iomanip>
#include<cmath>
#include<fstream>
#include<string>
#include<sstream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
int bitsum(int a);
bool lessthanbitsum(int a,int b){return bitsum(a)<bitsum(b);}
int main(){
	int a[]={33,61,12,19,14,71,78,59};
	vector<int>aa(a,a+8);
	sort(aa.begin (),aa.end (),lessthanbitsum);
	for(int i=0;i<aa.size();++i)
		cout<<aa[i]<<" ";
	cout<<"\n";

}
int bitsum(int a){
	int sum=0;
	for(int x=a;x;x/=10)
		sum+=x%10;
	return sum;
}
