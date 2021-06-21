
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    float sum =0;
    // bai 9
//    cout<<"Input n = ";
//    cin>>n;
//    for (int i = 1; i<=n; i++) {
//        sum = sum + (float)1/i;
//    }
//    cout<<"sum = "<<sum<<endl;
    // bai 10
    
        cout<<"Input n = ";
        cin>>n;
        for (int i = 0; i<=n; i++) {
            
            
            sum = sum + (float)1/(2*i+1);
        }
        cout<<"sum = "<<sum<<endl;
    return 0;
}
