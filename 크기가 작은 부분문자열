#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int number = 0;
    int size = p.length();
    for(int i=0; i<t.length() - size + 1; i++) {
        number = stoi(t.substr(i, size));
        if(number <= stoi(p)) {
            answer++;
        }
    }
    
    return answer;
}
