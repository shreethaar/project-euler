ones = {
        1:'one',
        2:'two',
        3:'three',
        4:'four',
        5:'five',
        6:'six',
        7:'seven',
        8:'eight',
        9:'nine',
}

teens = {
        10:'ten',
        11:'eleven',
        12:'twelve',
        13:'thirteen',
        14:'fourteen',
        15:'fifteen',
        16:'sixteen',
        17:'seventeen',
        18:'eighteen',
        19:'nineteen',
}

tens = {
        20:'twenty',
        30: 'thirty',
        40: 'forty',
        50: 'fifty',
        60: 'sixty',
        70: 'seventy',
        80: 'eighty',
        90: 'ninety',
}
def number_to_words(number):
    if number == 1000:
        return 'onethousand'
    
    word = ''
    hundreds = number // 100
    remainder = number % 100
    
    if hundreds > 0:
        word += ones[hundreds] + 'hundred'
        if remainder > 0:
            word += 'and'
    
    if remainder > 0:
        if remainder < 10:
            word += ones[remainder]
        elif 10 <= remainder < 20:
            word += teens[remainder]
        else:
            tens_part = (remainder // 10) * 10
            ones_part = remainder % 10
            word += tens[tens_part]
            if ones_part > 0:
                word += ones[ones_part]
    
    return word

total_letters = 0

for number in range(1, 1001):
    word = number_to_words(number)
    total_letters += len(word)

print(total_letters)
