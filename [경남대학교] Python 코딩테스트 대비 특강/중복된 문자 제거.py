def solution(my_string):
    answer = ''
    flag = True #같은 문자가 있다면 False 없다면 True
    
    for i in range(len(my_string)):
        for j in range(len(answer)):
            if my_string[i] == answer[j]: #같은 문자가 있다면 break
                flag = False
                break
        if flag == True: #같은 문자가 없다면 문자 삽입
            answer += my_string[i]
        
        flag = True #변수 초기화
 
    return answer
