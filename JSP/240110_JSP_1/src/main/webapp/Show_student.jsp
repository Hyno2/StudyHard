<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="com.javalex.ex.studentADAO" %>
<%@ page import="java.util.*" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<table border = "1">
		<tr>
			<th>학번, 이름, 나이, 학년, 전공</th>
		</tr>
		<%
			studentADAO st= new studentADAO();
				// 생성자에서 명령한대로, JDBC 드라이버 로드가 될 것
			ArrayList<String> data = st.showAllStudent();
				// 학생 전체 조회 결과값을 data에 저장
				
			for(String item: data){ // item 변수를 통해 data의 데이터
				// data의 데이터 개수만큼 %>
			<tr>
				<td><%=item %></td>
			</tr>
			<% }%>
				
		
		
	</table>

</body>
</html>