data("airquality")
for (i in 1:ncol(airquality)) {
  print(paste("NULL values in row ",i))
  print(which(is.na(airquality[,i])))
}

