import heapq

def Dijkstra()

def main():
    # input handling 
    
    while True:
        line = input()
        
        if not line.strip():
            break
        
        #first line input, defining number of edges, Start, End
        N, S, E = map(int, line.split())
        
        INF = float('inf')
        dist = [[INF]*2 for _ in range(N+1)]
        parent = {}
        
        # keeps track of distances using or not using ComXpress ticket
        dist[S][0] = 0
        # priority queue #
        pq = [(0, S, 0)] # cost, node, ticket_used?
        
        # graphs for each edge type, each will store a list of tuples including [from_node](to_node, cost) eg [x][0] = (y, 3)
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
            
        #-----------------debug----------------------# 
        print("Eco points")    
        for point in range(0, N):
            for v, w in eco[point]:
                print(f"{point} -> {v} (cost {w})")
        
        print("Com points")    
        for point in range(0, N):
            for v, w in com[point]:
                print(f"{point} -> {v} (cost {w})")
        #--------------end debug--------------------#
        
        while pq:
            z, x, used = heapq.heappop(pq)
            
            if 
            
main()