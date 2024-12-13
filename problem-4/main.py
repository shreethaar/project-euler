def palidCheck(num):
    a=num
    reverse=0
    while(num>0):
        remainder=num%10
        reverse=reverse*10+remainder
        num//=10
    return a==reverse

def productCheck():
    maxPalid=0
    for i in range(999,99,-1):
        for j in range(i,99,-1):
            prod=i*j
            if palidCheck(prod) and prod>maxPalid:
                maxPalid=prod
    return maxPalid

def main():
    result=productCheck()
    print(result)

if __name__=="__main__":
    main()





