def isPalindrome(self, s: str) -> bool:
    clean_string = "".join([char for char in s if char.isalnum()])

    clean_string = clean_string.lower()

    return clean_string == clean_string[::-1]