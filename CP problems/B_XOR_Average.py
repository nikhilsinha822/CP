    import sys 
    from heapq import *
     
    input = sys.stdin.readline;
     
    def solve() :
        n = int(input())
        # print(n)
     
        if n & 1 :
            for i in range(n):
                print(1,end= ' ')
        else :
            print(1 , 3 ,end = ' ')
            for i in range(n - 2) :
                print(2, end = ' ')
        print()
         
     
    if __name__ == "__main__":
        testCase = int(input().strip())
        while testCase : 
            solve()
            testCase -= 1