
def is_prime(n):
    if n == 1 or n == 0:
        return False
    for i in range(2, int(n**0.5)+1):
        if n%i==0:
            return False
    return True
arr = list(map(int, input().split()))
if any([is_prime(i) for i in arr]):
        print("Y")
else:
    print("N")