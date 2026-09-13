#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    float n;
    cin >> n;
    vector<float>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    float sum=0;
    for(int i=0;i<n;i++){
        sum= sum +a[i];
    }
    cout<<sum/n<<endl;
}