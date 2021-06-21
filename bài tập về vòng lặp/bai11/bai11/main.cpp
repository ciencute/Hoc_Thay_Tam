//
//  main.cpp
//  bai11
//
//  Created by vutrungkien on 22/06/2021.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n = 0 , m = 0, ngay_het_vo = 0;
    cout<<"nhap so doi vo ban a co = ";
    cin>>n;
    cout<<"so ngày duoc mua vo moi = ";
    cin>>m;
    for (int i = 1; i<=n; i++) {
        ngay_het_vo ++;
    }
   
    ngay_het_vo = ngay_het_vo + (n/m);
    if (n%m != 0) {
        ngay_het_vo ++;
    }
    ngay_het_vo = ngay_het_vo +((n/m)/m);

    
    cout<<ngay_het_vo<<endl;
    
    
    
    return 0;
}
