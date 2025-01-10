from math import sqrt

def main():
    count = 6
    current_number = 14
    last_prime = 0
    
    while count != 10001:
        is_prime = True
        for i in range(2, int(sqrt(current_number)) + 1):
            if current_number % i == 0:
                is_prime = False
                break
        
        if is_prime:
            count += 1
            last_prime = current_number
        current_number += 1
    
    print(f"The 10001st prime number is: {last_prime}")

if __name__ == "__main__":
    main()
