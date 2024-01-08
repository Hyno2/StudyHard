package com.javalex.ex;

import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import java.io.IOException;

/**
 * Servlet implementation class test1
 */
@WebServlet("/test1")
public class test1 extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public test1() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
//		response.getWriter().append("Served at: ").append(request.getContextPath());
		response.setContentType("text/html; charset=UTF-8");
		String name = request.getParameter("name");
		String age = request.getParameter("name");
		String major = request.getParameter("major");
		String[] hobby = request.getParameterValues("hobby");
		String potal = request.getParameter("potal");
		response.getWriter().append("<p>이름: "+name+"</p>");
		response.getWriter().append("<p>나이: "+age+"</p>");
		response.getWriter().append("<p>전공: "+major+"</p>");
		response.getWriter().append("취미:");
		for(String hobbies : hobby) {
			response.getWriter().append(hobbies+" ");
		}
		response.getWriter().append("<p>포털: "+potal+"</p>");
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		//doGet(request, response);
		response.sendRedirect("Input.jsp");
	}

}
