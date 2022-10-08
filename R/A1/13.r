# coordinate point in a XY coordinate system
x = readline(prompt = "Enter x coordinate\n")
y = readline(prompt = "Enter y coordinate\n")
x = as.numeric(x)
y = as.numeric(y)
if(x>0 && y>0){
  print("First quadrant")
}else if(x<0 && y>0){
  print("Second quadrant")
}else if(x<0 && y<0){
  print("Third quadrant")
}else{
  print("Fourth quadrant")
}