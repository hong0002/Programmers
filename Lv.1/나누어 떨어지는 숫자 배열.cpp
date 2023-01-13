#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    int tmp = 0;
    
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] % divisor == 0) {
            answer.push_back(arr[i]);
        }
    }
    if(answer.size() == 0) {
        answer.push_back(-1);
    }
    for(int i=0; i<answer.size(); i++) {
        for(int j=i; j<answer.size(); j++) {
            if(answer[i] > answer[j]) {
                tmp = answer[i];
                answer[i] = answer[j];
                answer[j] = tmp;
            }
        }
    }
    
    return answer;
}
