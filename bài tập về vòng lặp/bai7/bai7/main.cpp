//
//  main.cpp
//  bai7
//
//  Created by vutrungkien on 22/06/2021.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,x;
//    cout<<"Input n = ";
//    cin>>n;
//    while (n!=0) {
//        x = n % 10;
//        n = n /10;
//        cout<<x<<endl;
//    }
    
//
    
    
    
    
    do {
        cout<<"Input n = ";
        cin>>n;
        if(n > 0){
            for (int  i = 0; n!=0; i++) {
                x = n % 10;
                n = n /10;
                if(x%2 == 0){
                    cout<<" "<<x;
                }else{
                    cout<<" không có";
                }
              
            }
        }
    } while (n < 0);
    
    cout<<endl;
    
    
       
    
    
//    do {
//
//
//        } while (n < 0);
    
    
//    if (n>0) {
//
//        }
//    } else {
//        cout<<"Input n = ";
//        cin>>n;
//    }
//    cout<<"n = "<<n;
    
    //cout<<endl;
        
    
    return 0;
    }
