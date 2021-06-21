//
//  main.cpp
//  bai2
//
//  Created by vutrungkien on 21/06/2021.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    int result = 1;
    cout << "input n = ";
    cin>>n;
    for (int i = 1; i<=n; i++) {
        result = result * i;
    }
    cout << "result = "<<result<<endl;
    return 0;
}
