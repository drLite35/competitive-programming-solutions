#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <bitset>         
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;
#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    	string s;
    	cin>>s;
    	ll int ans =0;
    	ll int tmp =0;
    	for(auto it : s){
    		if(it == '0'){
    			tmp++;
    			continue;
    		}
    		ans = tmp;
    	}
    	cout<< s.size()-(ans+1)<<endl;
    }
    return 0;
    
}