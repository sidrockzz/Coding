# python3


def max_prod_fast(arr):
    p1 = max(arr)
    arr.remove(p1)
    p2 = max(arr)
    return p1*p2
#Stress test


if __name__ == '__main__':
    input_n = int(input())
    input_numbers = [int(x) for x in input().split()]
    print(max_prod_fast(input_numbers))
