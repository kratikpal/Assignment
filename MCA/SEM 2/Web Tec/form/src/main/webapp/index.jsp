<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
  <head>
    <title>User Authentication</title>
    <link rel="stylesheet" type="text/css" href="styles.css" />
  </head>

  <body>
  	
  	<input type="hidden" id="status" value="<%= request.getAttribute("status") %>">
  	<input type="hidden" id="loginstatus" value="<%= request.getAttribute("loginstatus") %>">
  
    <div class="container">
      <h2>Welcome</h2>

      <form method="post" action="login">
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
        <button onclick="window.location.href='register.jsp'">
          Click here to register
        </button>
      </div>
    </div>
    
    
  	<script src="https://unpkg.com/sweetalert/dist/sweetalert.min.js"></script>
	<link rel="stylesheet" href="alert/dist/sweetalert.css">
	
	<script type="text/javascript">
		var status = document.getElementById("status").value;
		if(status=="success"){
			swal("Congrats", "Account Created Successfully", "success");
		}
	</script>
	
	<script type="text/javascript">
		var status = document.getElementById("loginstatus").value;
		if(status=="failed"){
			swal("Sorry", "Wrong Email or Password", "error");
		}
	</script>
	
  </body> 
</html>