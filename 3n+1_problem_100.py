# idea: two numbers are run through


'''
Considerthefollowingalgorithm:
1. input n
2. print n
3. if n=1 then STOP
4. if n is odd then n←−3n+1
5. else n←−n/2
6. GOTO2

'''
mem = {1:1}

def algo(n):
    N = n
    cycle_length = 0
    while n not in mem:
        cycle_length += 1
        #print(n)
        if n == 1:
            break
        if not (n % 2 == 0):
            n = 3*n+1
        else:
            n = n//2
    mem[N] = cycle_length + mem[n]
    return mem[N]
    

def main():
    # input logic:
    #print("input numbers")
    while True:
        cur_max = 0
        try:
            i, j = map(int, input().split())
        except:
            break
        
        for n in range(min(i,j), max(i,j)+1):
            cur_max = max(cur_max, algo(n))
        
        print(i, j, cur_max)
main()   

