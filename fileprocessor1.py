
file_path = 'fileprocessor.input'

with open(file_path, 'r') as file:
    lines = file.readlines()

print("Printing out User Data:")

for line in lines:
    if line.startswith('#'):
        print(f"{line.split(':')[0]} is skipped because it starts with a hashtag (is commented out)")
        continue
    data = line.strip().split(':')
    if len(data) >= 4:
        print(f"The user {data[0]} has a password of {data[1]} and has userid {data[2]} and groupid {data[3]}")

print("End of User Data")

