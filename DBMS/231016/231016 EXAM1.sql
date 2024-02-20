-- 1. DJStudent 테이블 생성
--      학번, 이름, 학과명을 저장(모두 varchar2로 할 것)
CREATE TABLE DJStudent(
    SNUM VARCHAR2(20),
    SNAME VARCHAR2(20),
    SMJNAME VARCHAR2(20)
);
-- 2.   KBMajor 테이블 생성
--      학과코드(char(3)), 학과명(varchar2)
CREATE TABLE KBMajor(
    MCODE CHAR(3) PRIMARY KEY,
    MMJNAME VARCHAR2(100)
);
-- 3. KBStudent 테이블 생성
--      학번, 이름, 학과코드(char(3))
CREATE TABLE KBStudent (
    KSNUM  VARCHAR2(20),
    KSNAME VARCHAR2(100),
    KSCODE CHAR(3) PRIMARY KEY
);
--1,2,3에 각각 예시 데이터 5개 이상 추가하기
-- DJStudent 데이터 추가
INSERT INTO DJStudent VALUES('1','이현오','전자공학');
INSERT INTO DJStudent VALUES('2','이우성','컴퓨터공학');
INSERT INTO DJStudent VALUES('3','김유정','전기공학');
INSERT INTO DJStudent VALUES('4','박종학','기계공학');
INSERT INTO DJStudent VALUES('5','김건호','건축공학');

-- KBMajor 데이터 추가
INSERT INTO KBMajor VALUES('A','전자공학');
INSERT INTO KBMajor VALUES('B','컴퓨터공학');
INSERT INTO KBMajor VALUES('C','전기공학');
INSERT INTO KBMajor VALUES('D','기계공학');
INSERT INTO KBMajor VALUES('E','건축공학');
-- KBStudent 데이터 추가
INSERT INTO KBStudent VALUES('11','이순신','A');
INSERT INTO KBStudent VALUES('12','임꺽정','B');
INSERT INTO KBStudent VALUES('13','유관순','C');
INSERT INTO KBStudent VALUES('14','이이','D');
INSERT INTO KBStudent VALUES('15','곽재우','E');

SELECT * FROM DJStudent;
SELECT * FROM KBMajor;
SELECT * FROM KBStudent; -- 외래키 추가함 참고할 테이블은 KBMajor CODE

DROP TABLE KBMAJOR;
ALTER TABLE KBStudent ADD CONSTRAINT FK_CODE FOREIGN KEY(KSCODE) REFERENCES KBMajor(MCODE);

INSERT INTO KBSTUDENT VALUES('4','김동하','AB'); -- OK
INSERT INTO KBSTUDENT VALUES('5','박정후','111'); -- 학과코드가 111인 과는 현재 없다

INSERT INTO KBMAJOR VALUES('004','경영');
INSERT INTO KBSTUDENT VALUES('16','권대한','004');

-- JOIN
-- 두 개 이상의 테이블을 공통된 열(COLUMN)으로 묶는다
SELECT KSNUM,KBSTUDENT.KSNAME,KBMAJOR.MMJNAME
FROM KBSTUDENT JOIN KBMAJOR
ON kbstudent.kscode =kbmajor.mcode;

SELECT KSNUM 학번,KBSTUDENT.KSNAME 학생이름,KBMAJOR.MMJNAME 학과명
FROM KBSTUDENT JOIN KBMAJOR
ON kbstudent.kscode =kbmajor.mcode;

-- WHERE을 사용한 JOIN문, 두 테이블을 콤마,로 묶고, WHERE문을 사용함
SELECT KSNUM 학번,KBSTUDENT.KSNAME 학생이름,KBMAJOR.MMJNAME 학과명
FROM KBSTUDENT, KBMAJOR
WHERE kbstudent.kscode =kbmajor.mcode;

COMMIT;