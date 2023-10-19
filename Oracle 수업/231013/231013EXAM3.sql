-- 직원명단 테이블 생성 사원번호 문자열 PK, 이름 문자열 NOT NULL, 
--                  부서 문자열 NOT NULL, 나이 숫자
CREATE TABLE EMPLOYEE(
    EM_NUM VARCHAR2(20) PRIMARY KEY,
    EM_NAME VARCHAR2(20) NOT NULL,
    EM_DP VARCHAR2(20) NOT NULL,
    EM_AGE INT
);
-- 부서명단 테이블 생성 부서번호 문자열 PK, 부서이름 문자열 NOT NULL, 직원수 숫자
CREATE TABLE DEPARTMENT(
    DE_NUM VARCHAR2(20) PRIMARY KEY,
    DE_NAME VARCHAR2(20) NOT NULL,
    DE_EMNUM INT
);
-- 직원명단 데이터 추가
INSERT INTO EMPLOYEE VALUES('521','김길동','경영행정부',25);
INSERT INTO EMPLOYEE VALUES('525','이길동','교무부',40);
INSERT INTO EMPLOYEE VALUES('523','최길동','교무부',30);
INSERT INTO EMPLOYEE VALUES('524','정길동','교무지원부',29);

-- 부서명단 데이터 추가
INSERT INTO DEPARTMENT VALUES('1','교무부',30);
INSERT INTO DEPARTMENT VALUES('2','교무지원부',15);
INSERT INTO DEPARTMENT VALUES('3','경영행정부',10);

-- 직원명단,부서명단 모든 데이터 출력
SELECT * FROM EMPLOYEE;
SELECT * FROM DEPARTMENT;

-- 직원명단에서 이름과 부서 칼럼만 출력
SELECT EM_NAME,EM_DP FROM EMPLOYEE;

-- 직원명단에서 부서가 교무부인 데이터만 검색해 사원번호,이름,부서 칼럼만 출력
SELECT EM_NUM,EM_NAME,EM_DP FROM EMPLOYEE WHERE EM_DP = '교무부';

-- 부서명단에서 직원수가 10명 초과인 데이터만 검색해 부서이름,직원수 칼럼만 출력
SELECT DE_NAME,DE_EMNUM FROM DEPARTMENT WHERE DE_EMNUM > 10;

-- 부서명단에서 부서번호가 2인 데이터만 검색해 전체 칼럼을 출력
SELECT * FROM DEPARTMENT WHERE DE_NUM = '2';

-- 직원명단, 부서명단 테이블 삭제
DROP TABLE EMPLOYEE;
DROP TABLE DEPARTMENT;