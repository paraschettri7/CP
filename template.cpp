#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define YES { cout<<"YES\n"; }
#define NO { cout<<"NO\n"; }
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define forloop(i,n) for(int i=0; i<n; i++)
#define forlooponebased(i,n) for(int i=1; i<=n; i++)
#define forlooptilln(i,n) for(int i=0; i<=n; i++)
#define reverseforloop(i,n) for(int i=n-1; i>=0; i++)
#define debug(x) cout << #x << " = " << x << endl;
int binary_search(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) return mid;
        else if (nums[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1; 
}
const int N=1e5+10;

// vector<int> vec1(5, 0); // Initialized with size 5 and initial value 0
// vector<int> vec4(vec3.begin(), vec4.end()); // Initialized by copying another vector
// vector<int> vec5;  //Initialized without default size
// vec5.push_back(1);
// vec5.push_back(2);
//  vec5.push_back(3);  
// pushback se end main element add hota hain
//vec.erase(vec.begin() + 2); // Erase element at index 2 (3rd element)
//vec.erase(vec.begin() + 1, vec.begin() + 4); // Erase elements from index 1 to 3
//vec.pop_back(); // Remove the last element
// vector<int> vec; //agar size initaialised nahi  hain toh aisa
// int n;
// cin>>n;
//  forloop(i,n){
//   int x;
//   cin>>x;
//   vec.pushback(x); }
// for(auto it:vec)
// auto it=upperbound(v.begin( ),v.end( ),element jiska bound dhundna hain)
//result = (condition) ? value_if_true : value_if_false;
//int result = (x > 5) ? 100 : 200;




int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
        cin>>n>>k;
        vector<int> v(n);
        forloop(i,n){
            cin>>v[i];
        }
        int flag=0;
        for(int i=1;i<n;i++){
            if(v[i-1]>v[i]){
                flag=1;
                break;
            }}
        if(flag==0){
            cout<<"yes"<<endl;
            continue;
        }
        
        if(k>1){
            cout<<"YES"<<endl;
            continue;
        
        }
        else{
            cout<<"NO"<<endl;
            continue;
        
        }
	    
	    
	   
	    
	    
	    
	}
	

}
