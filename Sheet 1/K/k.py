a, b, c = map(int, input().split())
nums = list((a, b, c))

# mx = mn = nums[0]

# for i in range(1, 3):
#     if nums[i] > mx:    mx = nums[i]
#     if nums[i] < mn:    mn = nums[i]

# print("%d %d" %(mn, mx))

print("%d %d" %(min(nums), max(nums)))

