def reverse_string(string):
    reverse = ""
    for char in string:
        reverse = char + reverse
    return reverse


if __name__ == "__main__":
    print(reverse_string("method1"))
