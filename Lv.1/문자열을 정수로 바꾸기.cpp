#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    string conversion;
    
    if(s.substr(0,1) == "-") {
        conversion = s.substr(1);
        answer = -(stoi(conversion));
    }
    else {
        conversion = s.substr(0);
        answer = stoi(conversion);
    }
    
    return answer;
}
