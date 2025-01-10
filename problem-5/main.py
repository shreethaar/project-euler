def gcd(a:int,b:int)->int:
    while b!=0:
        temp=b
        b=a%b
        a=temp
    return a

def lcm(a:int,b:int)->int:
    return(a*b)//gcd(a,b)

def main():
    ans=1
    for i in range(1,21):
        ans=lcm(ans,i) 
    print(ans)

if __name__ == "__main__":
    main()
