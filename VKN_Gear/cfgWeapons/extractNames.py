output = open("output.txt", "a")

Uniforms = open("uniforms.hpp", "rt")
unidata = Uniforms.readlines()
Vests = open("vests.hpp", "rt")
vestdata = Vests.readlines()
Headgear = open("headgear.hpp", "rt")
headdata = Headgear.readlines()

allData = []

allData.append(unidata)
allData.append(vestdata)
allData.append(headdata)

print(allData)

FilteredData = []

for line in unidata:
    if "displayName =" in line:
        print(line)
        FilteredData.append(line)

for line in vestdata:
    if "displayName =" in line:
        print(line)
        FilteredData.append(line)

for line in headdata:
    if "displayName =" in line:
        print(line)
        FilteredData.append(line)


for line in FilteredData:
    output.writelines(line)


output.close()
input()


# example: $STR_VKN_combatUniform_rolledM90

# needs to change [vkn] to vkn and add $STR_ to the front.
# needs to replace spaces with _
# needs to remove -
# needs to remove ()
# needs to remove /
