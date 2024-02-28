n = int(input())
nums = [int(i) for i in input().split()][:n]
# print(max(nums))

mx = nums[0]
for i in range(1, n):
    if nums[i] > mx:
        mx = nums[i]

print(mx)