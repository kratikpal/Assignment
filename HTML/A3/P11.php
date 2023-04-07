<!DOCTYPE html>
<html>
<head>
	<title>P11</title>
</head>
<body>
	<form action="" method="POST">
		<label>Name:</label>
		<input type="text" id="name" name="name" required>
		<br>
		<label>Gender:</label>
		<input type="radio" id="male" name="gender" value="male" required>
		<label>Male</label>
		<input type="radio" id="female" name="gender" value="female" required>
		<label>Female</label>
		<br>
		<label>Hobbies:</label>
		<input type="checkbox" id="reading" name="hobbies[]" value="reading">
		<label>Reading</label>
		<input type="checkbox" id="coding" name="hobbies[]" value="coding">
		<label>Coding</label>
		<input type="checkbox" id="gaming" name="hobbies[]" value="gaming">
		<label>Gaming</label>
		<br>
		<label>Country:</label>
		<select id="country" name="country">
			<option value="USA">USA</option>
			<option value="India">India</option>
			<option value="Canada">Canada</option>
			<option value="Mexico">Mexico</option>
		</select>
		<br>
		<input type="submit" value="Submit">
		<input type="reset" value="Reset">
		<input type="image" src="image_button.png" width=100 height=25 alt="Image Button">
	</form>
</body>
</html>
