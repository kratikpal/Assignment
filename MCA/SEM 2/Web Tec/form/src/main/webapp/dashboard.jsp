<%@ page import="java.util.*, java.sql.*" %>
<%@ page contentType="text/html;charset=UTF-8" %>
<%@ page language="java" %>

<%
    // Get user ID from session
    Integer userIdObj = (Integer) session.getAttribute("userId");
    int userId = (userIdObj != null) ? userIdObj.intValue() : -1; // Default value -1 if ID is not found

    // Establish database connection
    String url = "jdbc:mysql://localhost:3306/user?useSSL=false";
    String username = "root";
    String password = "";

    Connection conn = null;
    try {
        Class.forName("com.mysql.jdbc.Driver");
        conn = DriverManager.getConnection(url, username, password);

        // Function to fetch user data
        PreparedStatement stmt = conn.prepareStatement("SELECT * FROM users WHERE id = ?");
        stmt.setInt(1, userId);
        ResultSet result = stmt.executeQuery();
        HashMap<String, String> user = new HashMap<>();
        if (result.next()) {
            user.put("name", result.getString("name"));
            user.put("email", result.getString("email"));
            user.put("dob", result.getString("dob"));
            user.put("country", result.getString("country"));
            user.put("hobbies", result.getString("hobbies"));
        }

        conn.close();

        // No need to close connection manually in JSP
%>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>User Dashboard</title>
    <link rel="stylesheet" href="styles.css">
</head>
<body>
    <div class="container">
        <h2>User Dashboard</h2>
        <% if (user != null && !user.isEmpty()) { %>
            <div class="form-group">
                <label>Name:</label>
                <p><%= user.get("name") %></p>
            </div>
            <div class="form-group">
                <label>Email:</label>
                <p><%= user.get("email") %></p>
            </div>
            <div class="form-group">
                <label>Date of Birth:</label>
                <p><%= user.get("dob") %></p>
            </div>
            <div class="form-group">
                <label>Country:</label>
                <p><%= user.get("country") %></p>
            </div>
            <div class="form-group">
                <label>Hobbies:</label>
                <p><%= user.get("hobbies") %></p>
            </div>
            <div class="option">
                <button onclick="logout()">
                    Logout
                </button>
            </div>
        <% } else { %>
            <p class="error">User not found.</p>
        <% } %>
    </div>
    
    <script>
    function logout() {
        // Use AJAX to call the logout servlet
        var xhr = new XMLHttpRequest();
        xhr.open('GET', 'logout', true); // The URL is mapped to the servlet
        xhr.onreadystatechange = function() {
            if (xhr.readyState == XMLHttpRequest.DONE) {
                if (xhr.status == 200) {
                    // Redirect to index.jsp after logout
                    window.location.href = 'index.jsp';
                } else {
                    // Handle errors if necessary
                    console.error('Logout failed.');
                }
            }
        };
        xhr.send();
    }
</script>
    
</body>
</html>
<%
    } catch (Exception e) {
        e.printStackTrace();
        out.println("Error: " + e.getMessage());
    } finally {
        try {
            if (conn != null) conn.close();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
%>
