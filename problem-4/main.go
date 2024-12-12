package main
import ("fmt")

func palidCheck(num int) bool {
    a:=num
    reverse:=0
    remainder:=0

    for num>0 {
        remainder=num%10
        reverse=reverse*10+remainder
        num/=10
    }
    return a==reverse
}

func productCheck() int {
    maxPalid:=0
    var prod int
    for i:=999;i>=100;i-- {
        for j:=i;j>=100;j--{
            prod=i*j
            if palidCheck(prod) && prod>maxPalid {
                maxPalid=prod
            }
        }
    }
    return maxPalid
}

func main() {
    result:=productCheck()
    fmt.Println(result)
}
