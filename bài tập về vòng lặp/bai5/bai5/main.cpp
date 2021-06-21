//
//  main.cpp
//  bai5
//
//  Created by vutrungkien on 21/06/2021.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,temp,sum=0;
    cout<<"input n = ";
    cin>>n;
    for (int i = 1; i <=n; i++) {
        if (n%i == 0) {
            sum= sum+i;
            temp = i;
            cout<<temp;
            if(temp <n)cout<<" + ";
        }
    }
    cout<<" = "<<sum<<endl;
   
  
    return 0;
}
