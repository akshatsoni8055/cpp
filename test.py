def find(str):
    str = str.lower()
    arr = [str.rfind('a'), str.rfind('e'), str.rfind('i'), str.rfind('o'), str.rfind('u')]

    for i in arr:
        if (i == -1):
            return "All vowels are not present"

    return "All vowels are present"


print(find(input()))