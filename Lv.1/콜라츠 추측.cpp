#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    long answer = 0;
    long x = num;
    long count = 0;
    
    if(x == 1) {
        answer = 0;
    }
    while(x != 1) {
        if(count == 500) {
            answer = -1;
            break;
        }
        if(x % 2 == 0) {
            x = x / 2;
        }
        else {
            x = x * 3 + 1;
        }
        count++;
        answer = count;
    }
     
    return answer;
}
