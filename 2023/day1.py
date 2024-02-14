input_list = []

while True:
    line = str(input())
    if line == "":
        break
    else:
        input_list.append(line)

calibration_values = []
for i in input_list:
    first = float('inf')
    last = 0
    for letter_idx in range(0, len(i)):
        if i[letter_idx].isdigit():
            print(i[letter_idx])
            if first == float('inf'):
                first = i[letter_idx]
            last = letter_idx
    calibration_values.append(int(str(first + i[last])))

sum = 0
for value in calibration_values:
    sum += value

print(calibration_values)
print("\n")
print(sum)