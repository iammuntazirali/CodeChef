#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z;
    cin >> x >> y >> z;
    if(x>y*z){
        cout << x-(y*z) << endl;
    }
    else{
        cout << "-1" << endl;
    }
}
