<!DOCTYPE html>
<html>
  <head>
    <title>User Authentication</title>
    <link rel="stylesheet" type="text/css" href="styles.css" />
  </head>

  <body>
    <div class="container">
      <h2>Welcome</h2>

      <form method="post" action="login.php">
        <div class="form-group">
          <label for="email">Email:</label>
          <input type="email" id="email" name="email" required />
        </div>

        <div class="form-group">
          <label for="password">Password:</label>
          <input type="password" id="password" name="password" required />
        </div>

        <div>
          <button type="submit">Login</button>
        </div>
      </form>

      <div class="option">
        <h3>OR</h3>
        <button onclick="window.location.href='register.html'">
          Click here to register
        </button>
      </div>

      <?php
      // Check if there's an error message to display
      if (isset($_GET['error'])) {
          echo "<p class='error'>" . $_GET['error'] . "</p>";
      }
      ?>
    </div>
  </body>
</html>
