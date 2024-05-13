package com.form.register;

import jakarta.servlet.RequestDispatcher;
import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import jakarta.servlet.http.HttpSession;

import java.io.IOException;
import java.io.PrintWriter;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

@WebServlet("/login")
public class loginServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		PrintWriter out = response.getWriter();
		
		String email = request.getParameter("email");
        String password = request.getParameter("password");
        
        HttpSession session = request.getSession();
        RequestDispatcher dispatcher = null;
        
        try {
        	
        	Class.forName("com.mysql.cj.jdbc.Driver");
        	String DB_URL = "jdbc:mysql://localhost:3306/user?useSSL=false";
            String DB_USER = "root";
            String DB_PASSWORD = "";
            Connection conn = DriverManager.getConnection(DB_URL, DB_USER, DB_PASSWORD);
            
            String sql = "SELECT * FROM users WHERE email=? AND password=?";
            PreparedStatement stmt = conn.prepareStatement(sql);
            stmt.setString(1, email);
            stmt.setString(2, password);
            ResultSet result = stmt.executeQuery();

            if (result.next()) {
                // Fetch the user ID from the result
                int userId = result.getInt("id");
                // Redirect to dashboard.jsp with userId
                session.setAttribute("userId", userId);
                dispatcher = request.getRequestDispatcher("dashboard.jsp");
            } else {
                request.setAttribute("loginstatus", "failed");
                dispatcher = request.getRequestDispatcher("index.jsp");
            }
            dispatcher.forward(request, response);
        }catch (Exception e) {
    		out.print(e.getMessage());
        }
        
	}

}
