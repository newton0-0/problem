#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {	
	    sort(a, a + size);
        
        int final = 0;
        int freq = 1;
        int value = 0;
        
        for(int i=0; i<size-1; i++) {
        if(i=size-2) {cout << "FGH" << endl;}
        	if( a[i] != a[i+1] ) {
                cout << i << a[i] << endl;
            	if(freq>=final) {
                	final = freq;
                    value = a[i];
                }
                freq = 1;
            }
            else {
            	cout << i << a[i] << endl;
            	freq++;
                if(i=size-2) {
                	final=freq;
                    value = a[i];
                }
            } 
        }
        
        cout << size;
        
        if(final>size/2) {
        	return value;
        }
        else {
        	return -1;
        }
        
        // your code here
        
    }
};

//{ Driver Code Starts.

int main(){

        int n=5;
        int arr[5]={3,1,3,3,2};
 
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;

    return 0;
}

// } Driver Code Ends

//User function template for C++