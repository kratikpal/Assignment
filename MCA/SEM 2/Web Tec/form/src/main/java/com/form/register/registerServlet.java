package com.form.register;

import java.io.*;
import java.sql.*;

import jakarta.servlet.RequestDispatcher;
import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import java.io.IOException;

@WebServlet("/register")
public class registerServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		PrintWriter out = response.getWriter();
		
		String name = request.getParameter("name");
        String email = request.getParameter("email");
        String password = request.getParameter("password");
        String dob = request.getParameter("dob");
        String gender = request.getParameter("gender");
        String country = request.getParameter("country");
        String[] hobbies = request.getParameterValues("hobbies[]");
        String hobbiesStr = String.join(", ", hobbies);
        
        try {
        	
        	Class.forName("com.mysql.cj.jdbc.Driver");
        	String DB_URL = "jdbc:mysql://localhost:3306/user?useSSL=false";
            String DB_USER = "root";
            String DB_PASSWORD = "";
            Connection conn = DriverManager.getConnection(DB_URL, DB_USER, DB_PASSWORD);
            
            String sql = "INSERT INTO users (name, email, password, dob, gender, country, hobbies) VALUES (?, ?, ?, ?, ?, ?, ?)";
            PreparedStatement stmt = conn.prepareStatement(sql);
            stmt.setString(1, name);
            stmt.setString(2, email);
            stmt.setString(3, password);
            stmt.setString(4, dob);
            stmt.setString(5, gender);
            stmt.setString(6, country);
            stmt.setString(7, hobbiesStr);
            
            int rowsAffected = stmt.executeUpdate();
            
            RequestDispatcher dispatcher = request.getRequestDispatcher("index.jsp");

            if (rowsAffected > 0) {
            	request.setAttribute("status", "success");
            }else {
            	request.setAttribute("status", "failed");
            }
        	dispatcher.forward(request, response);
        }catch (Exception e) {
    		out.print(e.getMessage());
        }
		
	}

}
