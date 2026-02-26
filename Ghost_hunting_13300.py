#Ghost hunting#

import math

def find_area(p1, p2, p3):
    x1, y1 = p1
    x2, y2 = p2
    x3, y3 = p3
     
    return abs((x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2)

def find_polar_angle(lowest, pole):
    #theta = arctan2(y-yl, x - xl)
    dx = pole[0] - lowest[0]
    dy = pole[1] - lowest[1]
    
    ang = math.atan2(dy, dx)
    if ang < 0:
        ang += 2 * math.pi
    return ang

def dist(a, b):
    return (a[0]-b[0])**2 + (a[1]-b[1])**2

def orientation(p1, p2, p3):
    x1, y1 = p1
    x2, y2 = p2
    x3, y3 = p3
    cross = (x2-x1)*(y3-y1) - (y2-y1)*(x3-x1)
    if cross > 0:
        return 1      # counter-clockwise turn
    elif cross < 0:
        return -1     # clockwise
    else:
        return 0      # collinear

def convex_hull(poles, lowest):
    
    
    others = [p for p in poles if p != lowest]
    sorted_poles = sorted(others, key=lambda p: (find_polar_angle(lowest, p), dist(lowest, p)))
    
    
    
    hull = [lowest]
    
    for p in range(len(sorted_poles)):
        while len(hull) >= 2 and orientation(hull[-2], hull[-1], sorted_poles[p]) <= 0:
            hull.pop()
        hull.append(sorted_poles[p])
        
    return hull

def cross(p1, p2, p3):
    return (p2[0]-p1[0])*(p3[1]-p1[1]) - (p2[1]-p1[1])*(p3[0]-p1[0])

def find_max_tri_on_hull(hull):
    H = len(hull)
    if H < 3:
        return 0.0

    max_area = 0
    # duplicate hull points to handle wrap-around
    hull = hull + hull

    k = 2
    for i in range(H):
        j = i + 1
        k = max(k, j+1)
        while j < i + H - 1:
            # move k forward as long as area increases
            while k + 1 < i + H and cross(hull[i], hull[j], hull[k+1]) > cross(hull[i], hull[j], hull[k]):
                k += 1

            max_area = max(max_area, cross(hull[i], hull[j], hull[k]))

            j += 1

    return max_area / 2.0
    
 
def main():
    while True:
        line = input()
        if not line.strip():
            break
        
        tot_poles = int(line)
        poles = []
        
        x, y = map(float, input().split())
        first_point = [x, y]
        poles.append(first_point)
        
        lowest = first_point
        
        for pole in range(tot_poles - 1):
            x, y = map(float, input().split())
            point = [x, y]
            poles.append(point)
            
            if y < lowest[1]:
                lowest = point
                
        hull = convex_hull(poles, lowest)
        
        max_area = find_max_tri_on_hull(hull)
                
        print(max_area)
    
    
main()
     
     