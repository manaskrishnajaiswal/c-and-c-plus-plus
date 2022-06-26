#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--) {
	    float N, A, B;
	    cin>>N>>A>>B;
	    float countA=0.0, countB=0.0;
	    for(int i=0;i<N;i++) {
	        float x;
	        cin>>x;
	        if(x==A) {
	            countA++;
	        }
	        if(x==B) {
	            countB++;
	        }
	    }
	    float Pa=countA/N;
	    float Pb=countB/N;
	    float TP=Pa*Pb;
	    printf("%0.6f\n", TP);
	    if(T==0) {
	        break;
	    }
	}
	return 0;
}