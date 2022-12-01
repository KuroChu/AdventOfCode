caloriesArr = []
with open("./input.txt", "r+") as file:
    content = file.read().splitlines()
    lines = []
    for line in content:
        if line == "":
            caloriesArr.append(lines)
            lines = []
        else:
            lines.append(int(line))
            if content[-1] == line:
                caloriesArr.append(lines)

parts = [sum(x) for x in caloriesArr]
print(max(parts))