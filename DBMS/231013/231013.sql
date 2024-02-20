-- 대소문자 구분 없음 문장 끝마다 세미클론(;) 넣기

-- Oracle 자료형
-- 문자형
-- CHAR(n) : 고정크기의 문자형 타입, 무조건 n개의 공간 할당(비효율적) 잘사용안함
-- VALCHAR2(n) : 가변크기의 문자형 타입, '최대 n개까지'의 공간 할당
-- NVARCHAR2(n) : 한글 또한 1개의 바이트로 취급하게 한다 원래는 한글은 3바이트

-- 숫자형
-- INT : 정수 숫자형
-- FLOAT : 실수 숫자형
-- NUMBER(P,S) : 정수, 실수 모두 가능, 
--              P(정수부분 + 실수부분 최대 작성 가능한 공간)/ S(실수부분 최대 작성 가능한 공간)
--              속성명이 HEIGHT이고 속성타입이 NUMBER(4,1) 이라 한다면
--              000.0 형태로 저장가능 ,    171.1, 99.9, 50

-- CRUD : CREAT / READ / UPDATE / DELETE => 생성/읽기/갱신/삭제
-- SQL문 : 위의 CRUD 기능을 수행하기 위한 명령문(질의문,쿼리문)
--      => <DQL / DDL / DML> / DCL / TCL

-- DQL(Query) : 데이터 조회
--  SELECT문 : 데이터를 검색하는 명령어 (검색된 결과는 출력하여 표현)
--  SELECT (칼럼명) FROM 테이블명 [WHERE 조건문];

SELECT LENGTH('HelloSQL') FROM DUAL WHERE LENGTH('HELLOSQL')>=8;

-- DDL :(Defination) : 데이터 구조(DB, 테이블, ...) 정의 , 공간정의
--      => CREATE(생성), ALTER(수정), DROP, TRUNCATE(삭제)

-- DML :(Manipulation) : 데이터 조작 ,직접적으로 데이터조작
--      => INSERT(삽입), UPDATE(수정), DELETE(삭제), (+SELECT)DQL DML 둘다 포함됌

-- 블로그 글에 대한 테이블 생성
CREATE TABLE POST(
    TITLE VARCHAR2(30), -- 글 제목
    DAY VARCHAR2(10),   -- 글 작성날짜
    BODY VARCHAR2(100)  -- 글 본문
);

-- 데이터 삽입 INSERT INTO 테이블명 (속성값1,속성값2,..) VALUES(데이터1값,데이터2값,..);
--           INSERT INTO 테이블명 VALUES(데이터값1,데이터값2, ...);
INSERT INTO POST VALUES('금요일','231013','이번주도 끝났다');
INSERT INTO POST VALUES('토요일','231014','주말시작이다');
INSERT INTO POST VALUES('일요일','231015','주말벌써끝');
INSERT INTO POST VALUES('월요일','231016','한주가 시작됐다');
INSERT INTO POST VALUES('화요일','231017','아직도 화요일이다');

-- POST 테이블에 있어, DAY의 값이 '20231013'인 데이터를 제거
-- DELETE FROM 테이블명 WHERE 조건문;
DELETE FROM POST WHERE DAY ='231013';

-- POST 테이블에 대해 전체 검색하여 출력
-- * : 전체를 의미한다
SELECT * FROM POST;

-- DROP : 테이블 삭제(데이터, 테이블 구조 모두 삭제)
-- TRUNCATE : 테이블안의 데이터 삭제 (데이터만 전체 삭제, 테이블 구조는 남아있다)
--          DROP OR TRUNCATE TABLE 테이블명
-- POST 테이블 전체삭제
DROP TABLE POST;

-- POST 테이블내에 데이터 삭제
TRUNCATE TABLE POST;
