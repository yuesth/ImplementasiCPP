#include <algorithm>
#include <string>
#include <iostream>
using namespace std;
int main()
{
	int n=0;
    string s;
    cin>>s;
    sort(s.begin(), s.end()); 
    do {
        cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));
}
