def solution(s):
    answer = ""
    loc = 0 #검사하고 있는 문자열의 위치
    
    while loc != len(s): #문자열의 길이와 같다면 반복 종료
        if s[loc] == 'z': #zero
            answer += '0'
            loc += 4
        elif s[loc] == 'o': #one
            answer += '1'
            loc += 3
        elif s[loc] == 't':
            if s[loc+1] == 'w': #two
                answer += '2'
                loc += 3
            else: #three
                answer += '3'
                loc += 5
        elif s[loc] == 'f':
            if s[loc+1] == 'o': #four
                answer += '4'
                loc += 4
            else: #five
                answer += '5'
                loc += 4
        elif s[loc] == 's':
            if s[loc+1] == 'i': #six
                answer += '6'
                loc += 3
            else: #seven
                answer += '7'
                loc += 5
        elif s[loc] == 'e': #eight
            answer += '8'
            loc += 5
        elif s[loc] == 'n': #nine
            answer += '9'
            loc += 4
        else: #숫자
            answer += str(s[loc])
            loc += 1
    
    return int(answer)
