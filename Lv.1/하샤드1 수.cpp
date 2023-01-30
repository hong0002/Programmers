#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;  
    string s = to_string(x);
    int sum = 0;
    
    for(int i=0; i<s.length(); i++) {
        sum += stoi(s.substr(i, 1));
    }
    if(x % sum == 0) {
        answer = true;
    }
    else {
        answer = false;
    }
    
    return answer;
}
