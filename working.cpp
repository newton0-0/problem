//Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

//Driver Code Starts.

int main() {
    int n=5;
    vector<long long> a{0,1,5,3,4};

    vector<long long> final(n, 0);
    long long factorial=1;
    long long h = 0;
    vector<long long> factorials(1, 1);
        
    for(int i=1; i<h+n; i++) {
        if (i<n) { if(a[i-1]>=h) { h=a[i-1]; } }
        //cout << a[i-1] << endl;
        factorial*=i;
        factorials.push_back(factorial);
    }

    for(int i=0; i<n; i++) {
        final[i]=factorials[a[i]];
        cout << final[i] << endl;
    }

    return 0;
}

//Driver Code Ends