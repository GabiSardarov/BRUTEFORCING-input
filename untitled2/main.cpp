#include <stdio.h>
#include <iostream>
#include <vector>
#include <thread>  // For std::this_thread::sleep_for
#include <chrono>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a=" !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";
    string s; getline(cin, s);
    string ans="";
    for(int i=0;i<=s.length()-1;i++) {
        while(ans!=s) {
            char x=a[rand()%97];
            cout<<ans<<x<<endl;
            if(x==s[i]) {
                ans.push_back(s[i]);
                break;
            }
            this_thread::sleep_for(chrono::milliseconds(1));
        }
    }
    return 0;
}
