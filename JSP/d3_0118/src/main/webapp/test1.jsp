<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
<script src="https://d3js.org/d3.v7.min.js"></script>
</head>
<body>
	<h1>각 과목별 그래프</h1>

	<script>
	// 국영수 평균을 구해서 data로 추가하고
	// 평균값보다 낮은 값에 대해서는 차트 색상을 빨간색으로
	// 평균값보다 높은 값에는 대해서는 차트 색상을 초록색으로
	
	// 1. 3개 점수 파라미터 처리
	let k = ${param.korean};
	let e = ${param.english};
	let m = ${param.math};
	let avg = (k+e+m)/3;
	
	// 2. 차트로 쵸현할 데이터 구성
	let score =[k,e,m,avg];
	
	// 3. 차트 표현 (차트 표현할 공간 마련)
	d3.select("body")
	.append("svg")
	.attr("id", "chart")
	
	// 4. 데이터 표현(차트 표현)
	d3.select("#chart") // svg태그 선택(차트 표현할 공간으로 선택)
	.selectAll("rect")
	.data(score)			  // <rect> 모두 선택
	.enter()			  // html 요소 - 데이터 연결 시도 (실패 -> <rect> 태그 없음)
				// 만약 연결 실패시 아래로 요소 추가
	.append("rect")		  // 대체 요소 추가 (네모의 위치, 크기)
	.attr("x", 0)
	.attr("y", (data, index) => {return index * 35;})
	.attr("height", 25)
	.attr("width", (data, index) => {return data;})
	.attr("fill", (data, index)=> {
		if(index === 3){return "Black";} // 평균값일때는 검은색
		else{	// 초록인지 빨강인지 구분해야함
			if(data >= score[3]){return "Green";}
			else{return "Red";}
		}
	})
	
	// 텍스트 추가 (과목명 , 데이터 값 출력)
	let subject = ["국어","영어","수학","평균"];
	d3.select("#chart")
	.selectAll("text")
	.data(score)
	.enter()
	.append("text")
	.text((data, index)=> {return subject[index]+": "+data;}) // "국어" : 90 형태로 출력
	.attr("x", (data, indext)=> {return data + 5;})
	.attr("y", (data, index)=> {return index*35+17;})
	.attr("fill", "navy")
	
	</script>

</body>
</html>