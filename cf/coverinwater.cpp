#include <iostream>
#include <string>
using namespace std;
int solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < n - 2; i++) {
        if(s[i]=='.' && s[i+1]== '.' && s[i+2]=='.') {
            return 2;
        }
    }
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '.') {
            count++;
        }
    }
    
    return count;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cout << solve() << "\n";
    }
    return 0;
}
