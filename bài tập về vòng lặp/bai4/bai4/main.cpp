//
//  main.cpp
//  bai4
//
//  Created by vutrungkien on 21/06/2021.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int n,chan;
    cout << "Input n = ";
    cin>>n;
    for (int i = 1; i <=n; i++) {
        if (i%2 ==0) {
            chan = i;
            cout<<i<<endl;
        }
    }
    return 0;
}
