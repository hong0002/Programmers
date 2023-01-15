#include <string>
#include <vector>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    int tmp;
    int sum = 0;
    
    for(int i=0; i<d.size(); i++) {
        for(int j=i; j<d.size(); j++) {
            if(d[i] > d[j]) {
                tmp = d[i];
                d[i] = d[j];
                d[j] = tmp;
            }
        }
    }
    for(int i=0; i<d.size(); i++) {
        if(budget < sum || budget < sum + d[i]) {
            break;
        }
        sum += d[i];
        answer++;
    }
    return answer;
}
