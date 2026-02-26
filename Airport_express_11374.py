import numpy as np

def main():
    # input handling 
    
    while True:
        line = input()
        
        if not line.strip():
            break
        
        #first line input
        N, S, E = map(int, line.split())
        
        #second line input
        while True:
            sub_line = input()