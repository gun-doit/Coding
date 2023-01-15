#손익분기점이고 뭐고 싀발 때리쳐
#A = 고정 비용
#B = 가변 비용
#C = 제품 가격

A,B,C = map(int,input().split())
break_even_point = 0 # 손익 분기점
if (B >= C): break_even_point = -1
else: break_even_point = A // (C - B) + 1
print(break_even_point)