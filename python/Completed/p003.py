

INPUT_NUM = 600851475143

def isPrimeFactor(n: int) -> bool:
    for i in range(2, n):
        if n % i == 0:
            return False
    return True


def main():
    print("Problem 3") 
    res = 0
    for i in range(1, INPUT_NUM):
        if INPUT_NUM % i == 0:
            if isPrimeFactor(i):
                print(i)
                res = max(res, i)
    print(res)

    return



if __name__ == "__main__":
    main()