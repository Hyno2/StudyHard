-- 1. DJStudent ���̺� ����
--      �й�, �̸�, �а����� ����(��� varchar2�� �� ��)
CREATE TABLE DJStudent(
    SNUM VARCHAR2(20),
    SNAME VARCHAR2(20),
    SMJNAME VARCHAR2(20)
);
-- 2.   KBMajor ���̺� ����
--      �а��ڵ�(char(3)), �а���(varchar2)
CREATE TABLE KBMajor(
    MCODE CHAR(3) PRIMARY KEY,
    MMJNAME VARCHAR2(100)
);
-- 3. KBStudent ���̺� ����
--      �й�, �̸�, �а��ڵ�(char(3))
CREATE TABLE KBStudent (
    KSNUM  VARCHAR2(20),
    KSNAME VARCHAR2(100),
    KSCODE CHAR(3) PRIMARY KEY
);
--1,2,3�� ���� ���� ������ 5�� �̻� �߰��ϱ�
-- DJStudent ������ �߰�
INSERT INTO DJStudent VALUES('1','������','���ڰ���');
INSERT INTO DJStudent VALUES('2','�̿켺','��ǻ�Ͱ���');
INSERT INTO DJStudent VALUES('3','������','�������');
INSERT INTO DJStudent VALUES('4','������','������');
INSERT INTO DJStudent VALUES('5','���ȣ','�������');

-- KBMajor ������ �߰�
INSERT INTO KBMajor VALUES('A','���ڰ���');
INSERT INTO KBMajor VALUES('B','��ǻ�Ͱ���');
INSERT INTO KBMajor VALUES('C','�������');
INSERT INTO KBMajor VALUES('D','������');
INSERT INTO KBMajor VALUES('E','�������');
-- KBStudent ������ �߰�
INSERT INTO KBStudent VALUES('11','�̼���','A');
INSERT INTO KBStudent VALUES('12','�Ӳ���','B');
INSERT INTO KBStudent VALUES('13','������','C');
INSERT INTO KBStudent VALUES('14','����','D');
INSERT INTO KBStudent VALUES('15','�����','E');

SELECT * FROM DJStudent;
SELECT * FROM KBMajor;
SELECT * FROM KBStudent; -- �ܷ�Ű �߰��� ������ ���̺��� KBMajor CODE

DROP TABLE KBMAJOR;
ALTER TABLE KBStudent ADD CONSTRAINT FK_CODE FOREIGN KEY(KSCODE) REFERENCES KBMajor(MCODE);

INSERT INTO KBSTUDENT VALUES('4','�赿��','AB'); -- OK
INSERT INTO KBSTUDENT VALUES('5','������','111'); -- �а��ڵ尡 111�� ���� ���� ����

INSERT INTO KBMAJOR VALUES('004','�濵');
INSERT INTO KBSTUDENT VALUES('16','�Ǵ���','004');

-- JOIN
-- �� �� �̻��� ���̺��� ����� ��(COLUMN)���� ���´�
SELECT KSNUM,KBSTUDENT.KSNAME,KBMAJOR.MMJNAME
FROM KBSTUDENT JOIN KBMAJOR
ON kbstudent.kscode =kbmajor.mcode;

SELECT KSNUM �й�,KBSTUDENT.KSNAME �л��̸�,KBMAJOR.MMJNAME �а���
FROM KBSTUDENT JOIN KBMAJOR
ON kbstudent.kscode =kbmajor.mcode;

-- WHERE�� ����� JOIN��, �� ���̺��� �޸�,�� ����, WHERE���� �����
SELECT KSNUM �й�,KBSTUDENT.KSNAME �л��̸�,KBMAJOR.MMJNAME �а���
FROM KBSTUDENT, KBMAJOR
WHERE kbstudent.kscode =kbmajor.mcode;

COMMIT;