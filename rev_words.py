def rev_words(str):
    sliced_arr = str.split()
    reversed_words = sliced_arr[::-1]
    reversed_sen = ' '.join(reversed_words)
    return reversed_sen

input_sen = input()
reversed_sen = rev_words(input_sen)
print(reversed_sen.strip())