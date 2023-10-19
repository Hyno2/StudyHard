
-- 지금까지는 하나의 파일에 대해 전체 코드에 대해 실행해왔으나
-- 단일 실행(CTRL+ENTER) / 스크립틀실행(전체 코드 실항)(F5)

-- DataBase = Data + Base
-- DBMS : DB를 관리하는 시스템 => Oracle, MySql MongoDB...

-- SqL문(쿼리문) : DBMS에서 CRUD를 수행하기 위해 사용하는 코드
-- CREUD : Create / Read / Update / Delete => 생성 읽기 갱신 삭제

-- DQL (Data Query Language : 데이터 조회하는 언어
-- SELECT : 데이터 검색하는 문법
-- SELECT : 속성이름 FROM 테이블명 [WHREE 조건식]
-- DUAL : 임시 테이블

SELECT LENGTH('이현오') FROM DUAL;
SELECT LENGTHB('이현오') FROM DUAL; -- 한글은 한글자에 3Byte

SELECT LENGTH('LeeHyeonOh') FROM DUAL;
SELECT LENGTHB('LeeHyeonOh') FROM DUAL;

-- WHERE절 조건식에 대해 거짓이므로 검색결과 출력 X
SELECT LENGTH('HELLO') FROM DUAL WHERE LENGTH('HELLO')>=5;

-- DDL (Data Definition Language) : 데이터 구조(DB,TABLE,...)을 정의하는 언어
--          => CREATE, ALTER, DROP, TRUNCATE, RENAME

-- CREATE : 데이터를 저장할 공간을 생성
-- CREATA TABLE 테이블명(
--      속성이름 속상타입,
--      ...
--);

CREATE TABLE STUDENT(
    HAK_BUN VARCHAR2(10),
    NAME VARCHAR2(20) NOT NULL,
    AGE INT NOT NULL,
    SCORE FLOAT
);
-- NOT NULL : "NULL이 되면 안되는" 속성에 작성
-- PRIMARY KEY : 기본키, 데이터들끼리 구분하기 위한 속성에 부여

-- * : 전체 출력
SELECT * FROM STUDENT;
-- 두가지만 출력
SELECT AGE, NAME FROM STUDENT;


-- 문자형
-- VARCHAR2 타입과 INT, NUMBER를 주로 사용
-- CHAR (n) : "고정"길이를 갖는 문자열
--            -> "무조건 n의 크기를 할당"
-- VARCHAR2(n) : "가변"길이를 갖는 문자열
--          -> "최대 크기를 n으로 갖고, 필요에 따라 0~n까지의 범위 할당"
--              한글 하나에 대해,n개중
-- NVARCHAR2(n) : 가변길이를 갖는 문자열
--          -> "최대 크기를 n으로 갖고, 필요에 따라 0~n까지의 범위 할당"

-- 숫자형
-- INT : 정수 숫자형
-- FLOAT : 실수 숫자형
-- NUMBER (p,s) : 정수/실수 둘다 저장 가능한 숫자형
--      p (정수+실수 부분에서 최대로 저장 가능한 범위)
--      s (실수 부분에서 최대로 저장 가능한 범위)
-- 속성명이 HEIGHT이고 속성타입이 NUMBER(4,1) 이라 한다면
--  000.0 형태로 저장가능 ,    171.1, 99.9, 50

-- 그 외에도 날짜 타입, LOB형도 있음 개인적으로 알아보자
-- DML : 데이터를 조작하는 명령어
-- INSERT : 테이블에 데이터를 삽입하는 명령어
--          INSERT INTO 테이블명 VALUES(데이터값1, 데이터값2, ..);
--          속성들이 선언된 순서대로 데이터값을 삽입
--          INSERT INTO 테이블명(속성명1, 송성명2, ...) VALUES(데이터값1, 데이터값2,..);
--          속성값1에는 데이터값1 삽입, 속성값2에는 데이터값2 삽입, ....

INSERT INTO STUDENT VALUES(1813, '이현오', 25, 3.5);
SELECT * FROM STUDENT;

-- DROP :  테이블을 삭제하는 명령어(테이블, 데이터 모두 삭제)
--          DROP TABLE 테이블명;
-- TRUNCATE : 테이블을 삭제하는 명령어(테이블의 형테는 남겨두고 데이터만 모두 삭제
--          TRUNCATE TABLE 테이블명;


-- ALTER : 데이터 구조에 대한 수정
--        => ADD, DROP, MODIFY, RENAME, RENAME COLUMN

-- ALTER 테이블명 변경 (RENAME)
-- ALTER TABLE 테이블명, RENAME TO 변경할_테이블명
ALTER TABLE STUDENT RENAME TO HAKSANG;

-- ALTER : 칼럼명 변경
-- ALTER TABLE 테이블명 RENAME COLUMN 기본_속성이름(칼럼명) TO 변경할_칼럼명
ALTER TABLE STUDENT RENAME COLUMN HAK_BUN TO NUM;
SELECT * FROM HAKSANG;

-- ALTER 칼럼 삭제(DROP)
-- ALTER TABLE 테이블명 DROP 제거할_속성이름
ALTER TABLE STUDENT DROP COLUMN AGE INT;

-- ALTER : 칼럼 추가
-- ALTER TABLE 테이블명 ADD 추가할_속성이름 추가할_속성타입
ALTER TABLE STUDENT ADD GRADE INT;

TRUNCATE TABLE STUDENT; -- "TABLE STUDENT가 잘렸습니다." 수행
DROP TABLE IF EXISTS STUDENT;     -- "TABLE STUDENT가 삭제되었습니다." 수행
SELECT * FROM STUDENT;

COMMIT; //저장완료