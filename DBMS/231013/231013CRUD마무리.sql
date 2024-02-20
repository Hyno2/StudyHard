-- DDL :(Defination) : 데이터 구조(DB, 테이블, ...) 정의 , 공간정의
--      => CREATE(생성), ALTER(수정), DROP, TRUNCATE(삭제)

-- DML :(Manipulation) : 데이터 조작 ,직접적으로 데이터조작
--      => INSERT(삽입), UPDATE(수정), DELETE(삭제), (+SELECT)DQL DML 둘다 포함됌

-- 휴대폰 테이블 생성
CREATE TABLE PHONE(
    NAME VARCHAR2(20),        -- 기종
    OS VARCHAR2(20),          -- 운영체제
    DAY INT,                  -- 출시년도
    WAT INT,                  -- 배터리 최대 와트
    COLOR VARCHAR(10)         -- 색상
);

-- ADD : 칼럼추가
-- ALTER TABLE 테이블명 ADD 칼럼명 칼럼타입;
-- PHONE 테이블에 FLOAT형 INCH 칼럼추가
ALTER TABLE SMARTPHONE_LIST ADD INCH FLOAT;

--  확인출력
SELECT * FROM SMARTPHONE_LIST;

-- DROP COLUMN : 칼럼제거
--  ALTER TABLE 테이블명 DROP COLUMN 칼럼명;
-- PHONE 테이블에 WAT 칼럼 제거
ALTER TABLE SMARTPHONE_LIST DROP COLUMN WAT;

-- RENAME : 테이블명 변경
--  ALTER TABLE 테이블명 RENAME TO 변경할테이블명;
-- RENAME COLUMN : 칼럼명 변경
-- ALTER TABLE 테이블명 RENAME COLUMN 원래컬럼명 TO 변경할컬럼명;

-- 테이블명 PHONE을 SMARTPHONE_LIST로 변경
ALTER TABLE PHONE RENAME TO SMARTPHONE_LIST;

-- INCH칼럼을 INCH1로 변경하기
ALTER TABLE SMARTPHONE_LIST RENAME COLUMN INCH TO INCH1;

-- MODIFY : 데이터 칼럼의 타입 변경
--  ALTER TABLE 테이블명 MODIFY 컬렴명 컬럼타입;

-- INCH1칼럼의 타입을 FLOAT->INT로 변경
ALTER TABLE SMARTPHONE_LIST MODIFY INCH1 INT;

-- 확인출력
SELECT * FROM SMARTPHONE_LIST;

-- INSERT로 데이터 추가
INSERT INTO SMARTPHONE_LIST VALUES('갤럭시S20','11',2021,'PINK',6.4);
INSERT INTO SMARTPHONE_LIST VALUES('아이폰13','10',2023,'WHITE',7.0);
INSERT INTO SMARTPHONE_LIST VALUES('갤럭시폴드2','12',2022,'BLUE',8.5);

-- UPDATE : 특정 데이터를 수정하는 명령어
--      UPDATE 테이블명 SET 칼럼1=변경값1, ... WHERE 조건절;
-- 출시년도가 2022인 데이터의 OS 값을 13으로 변경
UPDATE SMARTPHONE_LIST SET OS='13' WHERE DAY = '2022';
UPDATE SMARTPHONE_LIST SET OS='13', COLOR='BLACK' WHERE NAME = '아이폰13';
