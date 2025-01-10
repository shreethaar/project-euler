def first_obj() -> int:
    return sum(i * i for i in range(1, 101))  

def second_obj() -> int:
    total = sum(i for i in range(1, 101))
    return total * total

def third_obj(x: int, y: int) -> None:
    diff = x - y
    print(f"Difference: {diff}")

def main():
    sum_square = first_obj()
    square_sum = second_obj()
    third_obj(square_sum, sum_square)

if __name__ == "__main__":
    main()
