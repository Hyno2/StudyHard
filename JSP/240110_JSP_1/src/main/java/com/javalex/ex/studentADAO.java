package com.javalex.ex;

import java.sql.*;
import java.util.ArrayList;

public class studentADAO {
	// DAO : DB과 관련된 처리를 자바빈으로 따로 만들어 처리
	// DB접속에 필요한 정보를 필드로 초기화 해야 함
	// jdbc : DB와 연결을 돕는 도구 WEB-INF에 라이브러리 추가해야함
	
	// 필드
	private String url = "jdbc:mysql://localhost:3306/apidb"; // apidb는 db이름
	private String id ="root";
	private String pw="1234";
	 
	// DB 사용에 필요한 객체 3가지
	private Connection conn =null; 	// jdbc 연결 객체
	private Statement st = null;	// SQL문 실행 객체
	private ResultSet rs = null;	// SQL문 실행 결과 담는 객체
	
	// 생성자
	public studentADAO() {
		try {
			// jdbc 드라이버를 여기로 불러오기
			Class.forName("com.mysql.jdbc.Driver");
		} catch(Exception e) {
			System.out.println("JDBC 드라이버 연동 실패");
		}
	}

	
	// 메소드 : DB 연동이 필요한 기능들을 아래에 메소드 형태로 나누어 작성
	public ArrayList<String> showAllStudent(){
		ArrayList<String> result = new ArrayList<String>();
		
		try {
			// DB 접속 시도
			conn = DriverManager.getConnection(url,id,pw);
		
			String query="SELECT * FROM student";
			
			st = conn.createStatement(); // Statement객체를 초기화
			rs = st.executeQuery(query); // 쿼리문 실행, 실행결과를 rs에 저장
			
			while(rs.next()) {
				// 테이블 표 한칸에 하나의 데이터의 모든 칼럼 정보가 들어가기 때문에
				// 문자열 형태로 만들어서, ArrayList에 하나씩 저장
				String r = "";
				r += rs.getInt("hakbun");
				r += ",";
				r += rs.getString("name");
				r += ",";
				r += rs.getInt("age");
				r += ",";
				r += rs.getInt("grade");
				r += ",";
				r += rs.getString("major");
				// 여기까지 오면 문자열 r에는 5가지 칼럼의 정보가 모두 담기게 됨
				
				result.add(r);
			
			}			
		} catch(Exception e){
			System.out.println("showAllStudent 메소드 오류");
		}
		
		return result;
	}

}
