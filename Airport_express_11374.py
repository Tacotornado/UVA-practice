import heapq


def main():
    # input handling 
    
    while True:
        line = input()
        
        if not line.strip():
            break
        
        #first line input, defining number of edges, Start, End
        N, S, E = map(int, line.split())
        
        eco = [[] for _ in range(N+1)]
        com = [[] for _ in range(N+1)]
        
        # second line, adding in economy Xpress edges
        M = int(input())
        for _ in range(M):
            x, y, z = map(int, input().split())
            eco[x].append((y, z))
            eco[y].append((x, z))
            
        K = int(input())
        for _ in range(K):
            x, y, z = map(int, input().split())
            com[x].append((y, z))
            com[y].append((x, z))
            
        
        print("Eco points")    
        for point in range(0, N):
            for v, w in eco[point]:
                print(f"{point} -> {v} (cost {w})")
        
        print("Com points")    
        for point in range(0, N):
            for v, w in com[point]:
                print(f"{point} -> {v} (cost {w})")
            
main()