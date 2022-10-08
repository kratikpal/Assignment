# accept a grade and declare the equivalent description
grade = readline(prompt = "Enter one of E, V, G, A or F\n")
switch(grade,
       "E" = print("Excellent"),
       "V" = print("Very Good"),
       "G" = print("Good"),
       "A" = print("Average"),
       "F" = print("Fail")
       )