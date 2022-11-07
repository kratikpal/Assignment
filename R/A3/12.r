data_1 = data.frame(
  c1 = c(0,25,15,10,30),
  c2 = c(20,25,15,0,30),
  c3 = c(20,25,15,10,30)
)

print(data_1)

print("Removed rows with 0")
print(data_1[apply(data_1,1, function(row) all(row!=0)),])