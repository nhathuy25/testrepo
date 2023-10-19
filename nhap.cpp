/*#include<bits/stdc++.h>
using namespace std;

main(){
	int n;
	cin >> n;
	int spc = n - 1;
	while(spc >= 0){
		
	}
} */
// C++ program for Pascal’s Triangle
// A O(n^2) time and O(1) extra space
// function for Pascal's Triangle
#include <bits/stdc++.h>

using namespace std;
void printPascal(int n)
{
	
for (int line = 1; line <= n; line++)
{
	int spc = n - line;
	while(spc >= 0){
		cout << " ";
		spc--;
	}
	int C = 1;
	for (int i = 1; i <= line; i++)
	{
		cout<< C <<" ";
		C = C * (line - i) / i;
	}
	cout<<"\n";
}
}

int main()
{
	int n;
	cin >> n;
	printPascal(n);
	return 0;
}


