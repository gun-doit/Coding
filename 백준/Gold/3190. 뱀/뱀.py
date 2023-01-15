#Gold IV
"""
Solution
1. 뱀의 시작은 오른쪽으로 이동
2. 매초마다 이동
이동 조건:
1. 머리를 늘림
2. 늘린곳에 사과가 있으면 꼬리가 안움직임
3. 없다면 꼬리를 옮김

"""


Board_Size = int(input())
Apple = int(input())
head = [[0,1],[1,0],[0,-1],[-1,0]]
snake = [[1,1]]
k, Game_Time = 0, 1
Turn = []

#Board
Board = [[0 for cols in range(Board_Size+2)] for rows in range(Board_Size+2)]
for i in range(Board_Size+2):
    for j in range(Board_Size+2):
        if i == 0 or j == 0 or i == Board_Size+1 or j == Board_Size+1: Board[i][j] = -1

for i in range(Apple):
    x, y = map(int, input().split())
    Board[x][y] = 1

#Turn
for j in range(int(input())):
    cnt, time = input().split()
    Turn.append([cnt,time])

while True:
    if Board[snake[-1][0]+head[abs(k%4)][0]][snake[-1][1]+head[abs(k%4)][1]] == -1:
        break

    if Board[snake[-1][0]][snake[-1][1]] == 0:
        Board[snake[-1][0]][snake[-1][1]] = -1
        snake.append([snake[-1][0]+head[abs(k%4)][0],snake[-1][1]+head[abs(k%4)][1]])
        Board[snake[0][0]][snake[0][1]] = 0
        snake.pop(0)

    elif Board[snake[-1][0]][snake[-1][1]] == 1:
        Board[snake[-1][0]][snake[-1][1]] = -1
        snake.append([snake[-1][0]+head[abs(k%4)][0],snake[-1][1]+head[abs(k%4)][1]])

    if len(Turn) != 0 and Game_Time == int(Turn[0][0]):
        if(Turn[0][1] == 'D'):
            k+=1
        else:
            k-=1
        Turn.pop(0)

    Game_Time+=1

print(Game_Time)