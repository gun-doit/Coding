N : int = int(input())
for i in range(1, N+1):
    if(i<=N):
      for j in range(2*N):
          if(j < i or i >= 2*N-j ):
              print('*', end="")
          else: print(" ", end="")
    print()

for i in range(N-1, 0, -1):
    if(i<=N):
      for j in range(2*N):
          if(j < i or i >= 2*N-j ):
              print('*', end="")
          else: print(" ", end="")
    print()