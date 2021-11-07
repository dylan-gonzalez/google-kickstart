T = int(input())

def score(S, N):
    goodness = 0
    for i in range(1, int(N/2) + 1):
        if (S[i-1] != S[N-1-i+1]):
            goodness += 1
                
            
    return goodness

for i in range(T):
    N, K = [int(s) for s in input().split(" ")]
    
    S = str(input())
    
    goodness = score(S, N)
    
    if (goodness == K):
        print("Case #" + str(i+1) + ": 0")
    else:
        print("Case #" + str(i+1) + ": " + str(abs(K-goodness)))
        

