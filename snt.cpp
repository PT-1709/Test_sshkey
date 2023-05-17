

#include<iostream>
#include<math.h>

using namespace std;

bool check(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}


int main(){
    int n; cin >> n;
    check(n);
    if (check(n) == true){
        cout << "SNT";
    }
    else{
        cout << "No";
    }

}