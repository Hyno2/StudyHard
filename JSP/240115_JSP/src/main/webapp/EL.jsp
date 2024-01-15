<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>

<h3>EL 태그로 출력</h3>
<p>제 이름은 ${name} 입니다.</p>


<p>이름 : ${param.name} 나이 : ${param.age}</p>

<jsp:useBean id="user1" class="com.javalex.ex.UserDTO" scope="page"/>
  <jsp:setProperty name="user1" property="name" value="${param.name}"/>
  <jsp:setProperty name="user1" property="age" value="${param.age}"/>
  <!-- EL태그에선 알아서 형변환해준다 -->

<h3>DTO 활용해서 출력</h3>
<p>
	이름 <jsp:getProperty property="name" name="user1"/>
	나이 <jsp:getProperty property="age" name ="user1"/>
</p>

</body>
</html>