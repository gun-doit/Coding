n = int(input())

def tax(n):
    return n // 100 * 78
def prize(n):
    return n // 100 * 80
print(tax(n),  prize(n)+tax(n- prize(n)))