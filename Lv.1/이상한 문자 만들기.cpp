#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int num = 0;
    
    for(int i=0; i<s.length(); i++) {
        if(num % 2 == 0) {
            s[i] = toupper(s[i]);
        }
        else {
            s[i] = tolower(s[i]);
        }
        num++;
        if(s[i] == ' ') {
            num = 0;
        }
    }
    return s;
}
