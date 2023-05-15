def main():
    print("Problem 16")

    number = 2 ** 1000
    number = str(number)

    total = 0
    for digit in number:
        total += int(digit)

    print(total)

if __name__ == '__main__':
    main()