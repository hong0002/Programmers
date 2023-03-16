# -*- coding: cp949 -*-

dr_1 = [-1,0,1,0]
dc_1 = [0,1,0,-1]

def DFS_1(r,c):
    global cnt_1
    stack = [(r, c)]
    while stack:
        r, c = stack.pop()
        arr[r][c] = 0
        cnt_1 += 1

        for i in range(4):
            nr_1 = r + dr_1[i]
            nc_1 = c + dc_1[i]

            if nr_1 < 0 or nc_1 < 0 or nr_1 >= N or nc_1 >= N:
                continue
            if arr[nr_1][nc_1] == 0:
                continue

            stack.append((nr_1, nc_1))
           
N = int(input())
arr = [list(map(int, input())) for _ in range(N)]  # 행의 길이만큼 만들어준다

# 입력이 끝났으면 처음 시작 위치 찾기
for i in range(N):  # 행우선순회 하면서 전부다 보되
    for j in range(N):
        if arr[i][j] == 1:  # 그자리가 1이야?
            cnt_1 = 0  # prep 하고
            DFS_1(i, j)  # dfs 해!
            print(cnt_1)
