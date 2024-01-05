package com.javalex.ex;

import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import java.io.IOException;

/**
 * Servlet implementation class HelloServlet
 */

@WebServlet("/Hello, /Hi")
// 이 서블릿에 접근하기 위해서는 com.javalex.ex/HelloServlet.java 경로대로 들어와야함
// 경로를 간결하게 하기위해서 url 주소 일부(뒷부분)을치환
// url 매핑 하는 게 좋다
public class HelloServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public HelloServlet() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		//response.getWriter().append("Served at: ").append(request.getContextPath());
		// 여기에서 브라우저 상에서 나타나게 설정함 --> append()
		response.setContentType("text/html; charset=UTF-8"); // JSP최상단에 있는코드 append쓸수있게함
		String name = request.getParameter("name");
		response.getWriter().append("<h3>"+name+"님 환영합니다</h3>");
		
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		//doGet(request, response);
		response.setCharacterEncoding("UTF-8");
		response.setContentType("text/html; charset=UTF-8");
		String name = request.getParameter("name");
		response.getWriter().append("<h3>"+name+"님 환영합니다</h3>");
		
		System.out.print(name+"님 환영합니다!"); // 콘솔에 뜸 
		 
	}

}
