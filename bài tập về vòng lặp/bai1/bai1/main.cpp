//
//  main.cpp
//  bai1
//
//  Created by vutrungkien on 21/06/2021.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    int sum = 0;
    cout<<"nhap n = ";
    cin>>n;
    cout<<endl;
    for (int i = 0; i<= n ; i ++) {
        sum = sum + i;
    }
    cout<<"sum = "<<sum<<endl;
    return 0;
}
