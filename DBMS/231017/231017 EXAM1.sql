-- TEACHER ���̺� ���� : �̸�(�⺻Ű) �Ҽ� ��� ���
CREATE TABLE TEACHER (
    NAME VARCHAR2(20) PRIMARY KEY,
    COMPANY VARCHAR2(20),
    YEAR INT,
    MAJOR VARCHAR2(20)
);

-- STUDENT ���̺� ���� : �й�(�⺻Ű) �̸� ���� ��米��
--  (STUDENT.��米�� -> TEACHER.�̸� �����ϵ��� ����)
CREATE TABLE STUDENT(
    HAK_BUN VARCHAR2(20) PRIMARY KEY,
    NAME VARCHAR2(20),
    AGE INT,
    PRO VARCHAR2(20)
);
-- �ܷ�Ű ����
ALTER TABLE STUDENT ADD CONSTRAINT
FK_CODE FOREIGN KEY(PRO) REFERENCES TEACHER(NAME);
--DROP TABLE TEACHER;

-- ���ν��� ����ؼ� �������߰�
-- STUDENT ���̺� 10�� ������ �����߰�
create or replace PROCEDURE ADD_STUDENT(
    INPUT_HAKBUN IN VARCHAR2,
    INPUT_NAME VARCHAR2,
    INPUT_AGE INT,
    INPUT_TE VARCHAR2
)
IS BEGIN
INSERT INTO STUDENT VALUES(INPUT_HAKBUN,INPUT_NAME,INPUT_AGE,INPUT_TE);
END ADD_STUDENT;
/

-- STUDENT ���̺� 10�� ������ �߰� ���ν��� ȣ��
EXEC ADD_STUDENT('001','������',32,'�̵���');
EXEC ADD_STUDENT('002','�層��',32,'�̵���');
EXEC ADD_STUDENT('003','������',30,'������');
EXEC ADD_STUDENT('004','ȫ��ȯ',30,'������');
EXEC ADD_STUDENT('005','�̼���',40,'������');
EXEC ADD_STUDENT('006','������',24,'������');
EXEC ADD_STUDENT('007','�ӱ�ö',40,'������');
EXEC ADD_STUDENT('008','������',29,'�̵���');
EXEC ADD_STUDENT('009','��â��',33,'������');
EXEC ADD_STUDENT('010','�Ǵ���',44,'������');
EXEC ADD_STUDENT('011','û�ҳ�',19,'������');

-- TEACHER ���̺� �Ʒ� ������ �߰�
-- TEACHER ���̺� ������ �߰� ���ν���
create or replace PROCEDURE ADD_TEACHER(
    INPUT_NAME IN VARCHAR2,
    INPUT_COM VARCHAR2,
    INPUT_YEAR INT,
    INPUT_MAJ VARCHAR2
)
IS BEGIN
INSERT INTO TEACHER VALUES(INPUT_NAME,INPUT_COM,INPUT_YEAR,INPUT_MAJ);
END ADD_TEACHER;
/
--('�̵���','KB',3,'����')
--('������','KB',1,'����')
--('������','KB',5,'����')
--('������','KB',1,'����')
-- TEACHER ���̺� ������ �߰� ���ν��� ȣ��
EXEC ADD_TEACHER('�̵���','KB',3,'����');
EXEC ADD_TEACHER('������','KB',1,'����');
EXEC ADD_TEACHER('������','KB',5,'����');
EXEC ADD_TEACHER('������','KB',1,'����');

--STUDENT, TEACHER ������ ���̺�� ���
SELECT * FROM STUDENT;
SELECT * FROM TEACHER;

--STUDENT, TEACHER �ϳ��� ���̺�� ���
SELECT * FROM STUDENT,TEACHER WHERE STUDENT.PRO = teacher.name;

-- STUDENT ���� �������� ����, TEACHER ��� �������� ����
SELECT * FROM STUDENT,TEACHER ORDER BY STUDENT.AGE ASC, TEACHER.YEAR DESC;

-- ���ν��� �����ؼ� �Ʒ� ��ɹ� ����
create or replace PROCEDURE DEL_STUDENT
IS BEGIN
DELETE FROM STUDENT WHERE AGE < 20;
END DEL_STUDENT;
/
-- �л� �� ���̰� 20 �̸��� �л� ������ ����
EXEC DEL_STUDENT();


-- ������� ����� 1�� �߰��ؼ� �����ϱ�
CREATE OR REPLACE PROCEDURE UP_TEACHER
IS BEGIN
UPDATE TEACHER SET YEAR = YEAR + 1; 
END UP_TEACHER;
/
-- ��� 1���� ���ν��� ȣ��
EXEC UP_TEACHER();

-- ��� 1 ���� ���� ���ν���
CREATE OR REPLACE PROCEDURE DOWN_TEACHER
 
IS BEGIN
UPDATE TEACHER SET YEAR = YEAR - 1; 
END DOWN_TEACHER;
/

-- ��� 1 ���� ���ν��� ȣ��
EXEC DOWN_TEACHER();
 
-- �л��� �� �ο�, ������ �� ��, �ִ밪, �ּҰ�, ��հ��� ��� �ϳ��� ���̺�� ���
SELECT COUNT(*) ���ο�, SUM(AGE) ��������, MAX(AGE) �ִ볪��,
MIN(AGE) �ּҳ���, AVG(AGE) ��ճ��� FROM STUDENT; 

-- ������ �Ҽ� �� ��� ���, �̶� �ߺ��Ǵ� ���� �ѹ��� ��µǰԲ� �Ѵ�.
SELECT COMPANY �Ҽ�, MAJOR ��� FROM TEACHER GROUP BY TEACHER.COMPANY, TEACHER.MAJOR;

-- ������ �Ҽ� �� ��� ��� ���
SELECT COMPANY �Ҽ�, AVG(YEAR) ��հ�� FROM TEACHER GROUP BY TEACHER.COMPANY;

