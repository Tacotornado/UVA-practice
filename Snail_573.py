def main():
    # sample input is 4 integers where first is height,
    # second is distance climbed in daylight,
    # third is distance slid at night,
    # fourth is the fatigue factor
    while True:
        line = input()
        if not line.strip():
            break  
        h, u, d, f = map(int, line.split())
        if h == 0:
            break
        
        fatigue = u * f / 100.0
        days = 0
        cur_h = 0
        cur_climb = u
        while True:
            days += 1
            #print(days)
            # daylight climb
            cur_h += cur_climb
            #print(f"cur height after climb: {cur_h}")
            if cur_h > h:
                print(f"success on day {days}")
                break
            cur_h -= d
            
            #print(f"cur height after slide: {cur_h}")
            
            cur_climb -= fatigue
            # edge case, climbing cannot go negative
            if cur_climb < 0:
                cur_climb = 0
        
            if cur_h < 0:
                print(f"failure on day {days}")
                break

            
if __name__ == "__main__":
    
    main()