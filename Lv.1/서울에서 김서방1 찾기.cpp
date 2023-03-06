#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int count = 0;
    
    for(int i=0; i<seoul.size(); i++) {
        if(seoul[i] == "Kim") {
            break;
        }
        count++;
    }
    answer.append("김서방은 ");
    answer.append(to_string(count));
    answer.append("에 있다");
    
    return answer;
}
