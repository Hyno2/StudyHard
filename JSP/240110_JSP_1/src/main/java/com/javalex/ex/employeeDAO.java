package com.javalex.ex;
import java.sql.*;


public class employeeDAO {
	// DB 접속에 필요한 정보
	private String url ="jdbc:mysql://localhost:3306/apidb";
	private String id = "root"; 
	private String pw = "1234";
	
	// DB 연동에 필요한 4가지 불러오기
	private Connection conn =null;
	private Statement st = null;
	private ResultSet rs = null;
	private PreparedStatement ps =null;//동적 SQL문에 필요한 객체
	
	// html에 입력값1 이 있고
	// SELECT * FROM employee WHERE id = 입력값1
	
	public employeeDAO() {
		try {
			Class.forName("com.mysql.jdbc.Driver");
		} catch(Exception e){
			System.out.println(e.toString());
		}
	}
	
	// employee DB : 아이디 ,비번, 이름
	// 예상할 수 있는 필요한 기능:
	// 			DB에 저장된 아이디 비번중 입력으로 받은 아이디 비번이 있는지
	public Boolean check_Account(String input_id,String input_pw) {
		// DB 내용은 DAO 자체에서 로드
		// html에서 입력받은 값은 매개변수로 받아올 필요가있다
		try {
			// 1. DB 접속
			conn = DriverManager.getConnection(url, id, pw);
			
			// 2. sql문 실행 
			// DB에 있는 id-pwd 쌍 중
			// input_id, input_pw쌍이 같은 데이터를 조회
			String query = "SELECT * FROM employee WHERE id = ? && passwd = ?";
			ps = conn.prepareStatement(query); // ps 객체 초기화(+사용할 쿼리민 미리 적용)
			ps.setString(1,input_id); // 첫번째 ?에 input_id값을 삽입한다.
			ps.setString(2,input_pw);
			rs = ps.executeQuery(); // SQL문 실행 결과 담기
			
			// 로그인에 성공했다면 rs에 값이 있을 것 -> rs.next()에 값이 조회가 가능
			// 실패햤다면 rs 값이 없을 것
			if(rs.next()) {
				return true;
			} else {
				return false; // DB에 회원정보가 없을때
			}
			
		} catch(Exception e) {
			System.out.println("실패");
			return false;	// 실행하다가 에러가 걸렸을 때
		}
		
	}
	
	// 로그인을 시도하는 계정의 사용자 이름을 반환
	public String getName(String input_id, String input_pw){
		try {
			// DB 접근
			conn = DriverManager.getConnection(url,id,pw);
			
			// DB에 있는 데이터 중
			// html 파일에서 입력한 id pw가 같은 데이터의 이름 빼오기
			String query = "SELECT * FROM employee WHERE id = ? AND passwd = ?";
			ps = conn.prepareStatement(query); // ps 객체 초기화(+사용할 쿼리민 미리 적용)
			ps.setString(1,input_id); // 첫번째 ?에 input_id값을 삽입한다.
			ps.setString(2,input_pw);
			rs= ps.executeQuery(); 
			
			// 반환할 값을 저장할 변수 name 선언 (임의의 값으로 초기화)
			String name = "none";
			if(rs.next()) {
				name = rs.getString("name");			// 해당 데이터의 이름 값
			}
			return name;
			
		}catch(Exception e) {
			System.out.println("getName 에러 발생");
			return "error";
		}
	
	}
	
}
