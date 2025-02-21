package main

import (
    "fmt"
    "bufio"
    "io"
    "os"
    "sort"
    "strings"
    "log"
)


func namevalue (name string) int {
    value:=0
    for _,ch:=range name {
        value += int(ch-'A'+1)
    }
    return value
}

func main() {
    file,err:=os.Open("0022_names.txt")
    if err!=nil {
        log.Fatalf("Failed to open file: %v",err)
    }
    defer file.Close()

    content,err:=io.ReadAll(bufio.NewReader(file))
    if err!=nil{
        log.Fatalf("Failed to read file: %v",err)
    }

    rawnames:=strings.Split(string(content),",")
    var names []string
    for _,rawname:=range rawnames {
        cleaned:=strings.Trim(rawname,"\"")
        names=append(names,cleaned)
    }
    sort.Strings(names)
    var totalscore int64
    for i,name:=range names {
        val:=namevalue(name)
        position:=i+1
        totalscore += int64(position) * int64(val)
    }
    fmt.Printf("%d\n",totalscore)
}

