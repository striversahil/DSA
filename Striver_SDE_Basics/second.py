def main():
    count = 0
    for i in range(2, 100000):
        for j in range(2, i):
            if i % j == 0:
                count += 1
                break
    print(count)

if __name__ == "__main__":
    main()
