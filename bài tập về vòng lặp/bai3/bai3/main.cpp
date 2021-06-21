#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int n, result = 0;
    cout << "Input n =";
    cin>>n;
    for (int i = 1; i<=n; i++) {
        result = result +(i*i);
    }
    cout << "Result = "<<result<<endl;
    return 0;
}
