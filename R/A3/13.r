data("airquality")

num = round((nrow(airquality)*0.80))
print("80% data")
print(airquality[1:num,])

print("20% data")
print(airquality[(num+1):nrow(airquality),])
