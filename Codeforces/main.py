import sys
def solve(N, A, k):
    if N==1:
        return A[0]
    firstmax=max(A[0],A[1])
    secmax=min(A[0],A[1])
    for i in range(2,N):
        if A[i]>firstmax:
            secmax=firstmax
            firstmax=A[i]
        elif A[i]>secmax:
            secmax=A[i]
    score=0
    if firstmax>=0 and secmax>=0:
        if k%2==0:
            score+=(k//2)*firstmax+(k//2)*secmax
        else:
            score+=(k//2+1)*firstmax+(k//2)*secmax
    elif secmax<0 and firstmax>0:
        if abs(firstmax)>abs(secmax):
            if (k-1)%2==0:
                score+=((k-1)//2)*firstmax+((k-1)//2)*secmax
                score+=firstmax
            else:
                score+=((k-1)//2+1)*firstmax+((k-1)//2)*secmax
        else:
            score+=firstmax
    elif firstmax<0:
        score+=firstmax
    return score%(1000000007)
N = int(sys.stdin.readline().strip())

A = []
for _ in range(N):
    A.append(int(sys.stdin.readline().strip()))

K = int(sys.stdin.readline().strip())

result = solve(N, A, K)

print(result)