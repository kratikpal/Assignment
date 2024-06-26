<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
  <head>
    <title>User Registration</title>
    <link rel="stylesheet" type="text/css" href="styles.css" />
  </head>
  <body>
    <div class="container">
      <h2>User Registration</h2>
      <form action="register" method="post">
        <div class="form-group">
          <label for="name">Name:</label>
          <input type="text" id="name" name="name" required />
        </div>
        <div class="form-group">
          <label for="email">Email:</label>
          <input type="email" id="email" name="email" required />
        </div>
        <div class="form-group">
          <label for="password">Password:</label>
          <input type="password" id="password" name="password" required />
        </div>
        <div class="form-group">
          <label for="dob">Date of Birth:</label>
          <input type="date" id="dob" name="dob" required />
        </div>
        <div class="form-group">
          <label>Gender:</label>
          <div class="gender-options">
            <div>
              <input
                type="radio"
                id="male"
                name="gender"
                value="male"
                required
              />
              Male
            </div>
            <div>
              <input
                type="radio"
                id="female"
                name="gender"
                value="female"
                required
              />
              Female
            </div>
            <div>
              <input
                type="radio"
                id="other"
                name="gender"
                value="other"
                required
              />
              Other
            </div>
          </div>
        </div>
        <div class="form-group">
          <label for="country">Country:</label>
          <input type="text" id="country" name="country" required />
        </div>
        <div class="form-group">
          <label>Hobbies:</label>
          <div class="hobby-options">
            <div>
              <input
                type="checkbox"
                id="reading"
                name="hobbies[]"
                value="reading"
              />
              <label for="reading">Reading</label>
            </div>
            <div>
              <input
                type="checkbox"
                id="swimming"
                name="hobbies[]"
                value="swimming"
              />
              <label for="swimming">Swimming</label>
            </div>
            <div>
              <input
                type="checkbox"
                id="cooking"
                name="hobbies[]"
                value="cooking"
              />
              <label for="cooking">Cooking</label>
            </div>
            <!-- Add more hobbies here -->
          </div>
        </div>
        <button type="submit">Register</button>
      </form>
    </div>
  </body>
</html>