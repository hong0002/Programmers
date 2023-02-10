#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    string s;
    
    while(n != 0) {
        s.append(to_string(n % 3));
        n /= 3;
    }
    for(int i=0; i<s.length(); i++) {
        answer += stoi(s.substr(i, 1)) * pow(3, s.length() - 1 - i);
    }
    
    return answer;
}
