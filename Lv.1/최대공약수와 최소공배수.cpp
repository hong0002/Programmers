#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int gt = 1, lt = 1;
    int tmp;
    
    if(n < m) {
        tmp = n;
        n = m;
        m = tmp;
    }
    
    for(int i=1; i<=m; i++) {
        if(n % i == 0 && m % i == 0) {
            gt = i;
        }
    }
    answer.push_back(gt);
    for(int i=1; i<=n*m; i++) {
        if(i % n == 0 && i % m == 0) {
            lt = i;
            answer.push_back(lt);
            break;
        }
    }
    
    return answer;
}
