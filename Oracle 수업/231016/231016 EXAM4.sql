CREATE SEQUENCE COMPANY;
--1. �μ� ���̺� ����
-- �ڵ� char(3)
-- �μ��� varchar2(100)
CREATE TABLE DEPARTMENT(
    D_CODE CHAR(3) PRIMARY KEY,
    D_NAME VARCHAR2(100)
);
--2. ���� ���̺� ����
-- �ڵ� int
-- ���޸� varchar2(100)
CREATE TABLE RANK(
    R_CODE INT PRIMARY KEY,
    R_NAME VARCHAR2(100)
);
--3. �λ� ���̺��� �����.
-- ��� char(5)
-- �μ��ڵ�
-- �����ڵ�
-- �̸� varchar2(100)
-- ���� int
-- ���� char(1)
-- HP varchar2(15) unique
CREATE TABLE TRANSFER(
    T_NUM CHAR(5),
    TD_CODE CHAR(3),
    TR_CODE INT,
    T_NAME VARCHAR2(100),
    T_AGE INT,
    T_SEX CHAR(1),
    T_HP VARCHAR(15) UNIQUE
);

--4. �μ� 3��, ���� 3��, ��� 10���� �����.
--�μ� 3��
INSERT INTO DEPARTMENT VALUES('111','���ð�');
INSERT INTO DEPARTMENT VALUES('222','ȯ���');
INSERT INTO DEPARTMENT VALUES('333','������');
--���� 3��
INSERT INTO RANK VALUES(COMPANY.NEXTVAL,'����');
INSERT INTO RANK VALUES(COMPANY.NEXTVAL,'����');
INSERT INTO RANK VALUES(COMPANY.NEXTVAL,'����');
--��� 10��
INSERT INTO TRANSFER VALUES('A','111',1,'������',32,'M','010-1111-1111');
INSERT INTO TRANSFER VALUES('B','333',2,'����ȣ',26,'M','010-2222-2222');
INSERT INTO TRANSFER VALUES('C','222',3,'�̱���',29,'F','010-3333-3333');
INSERT INTO TRANSFER VALUES('D','111',3,'����',36,'M','010-4444-4444');
INSERT INTO TRANSFER VALUES('E','222',2,'�����',40,'M','010-5555-5555');
INSERT INTO TRANSFER VALUES('F','222',1,'����ȣ',38,'M','010-6666-6666');
INSERT INTO TRANSFER VALUES('G','333',2,'���ο�',33,'M','010-7777-7777');
INSERT INTO TRANSFER VALUES('H','333',3,'����ȣ',41,'M','010-8888-8888');
INSERT INTO TRANSFER VALUES('I','111',2,'������',21,'F','010-9999-9999');
INSERT INTO TRANSFER VALUES('J','111',1,'������',38,'M','010-0000-0000');

--5. ���� �̾��� ����� ã�� ������ �ۼ�(like Ȥ�� ���۸��̳� gpt ����)
-- %�� �ǹ� : �ּ� 0���� �̻�
-- ��% = ��, �̵���, ������ ���� ��� 
-- %�� = ..�̷� ������ ��
-- %��% = �� �� ���Ե������� �� ����
SELECT * FROM TRANSFER WHERE T_NAME LIKE '��%';    

--6. ���� ���� ���̴� �� ������ ���
SELECT MAX(T_AGE) �ְ�� FROM TRANSFER ;
--7. ���� ���̰� � ����� �������� ���(��ø���ǹ��� ���� �Ǵ� �� ���� ������ �𸣸� ���۸��̳� gpt)
SELECT * FROM TRANSFER WHERE T_AGE = (SELECT MIN(T_AGE) FROM TRANSFER);

--8. ���� ���̰� ���� �μ� ����(��� ���� ����)
-- �μ��� ��� ���̸� ���ؾ� �Ѵ�.
SELECT TD_CODE,AVG(T_AGE) FROM TRANSFER GROUP BY TD_CODE;
-- �Ҽ��� 0.1 ���� �������ϱ� ROUND
SELECT TD_CODE,ROUND(AVG(T_AGE),1) FROM TRANSFER GROUP BY TD_CODE;

-- ��� ���鶧 �߿��Ѱ� ROUND, AVG ���� �̿��� �丸�鶧
-- �̺κп� ���� �ӽ� �̸��� �ٿ�����Ѵ� (�̸��� RVA�� �������)
-- �信�� ���� �÷��� ���ؼ� �߰�,����,������ �ȵȴ�
CREATE VIEW AVG_TRANS AS SELECT TD_CODE, ROUND(AVG(T_AGE),1)RVA FROM TRANSFER
GROUP BY TD_CODE;

SELECT * FROM AVG_TRANS;

-- ���߿��� MAX���� ���ؾ��Ѵ�
SELECT * FROM AVG_TRANS WHERE RVA=(SELECT MAX(RVA) FROM AVG_TRANS);
-- �μ��� ��� ���̰� MAX�� ��ġ�ϴ� �μ��� ã�ƾ��Ѵ�
SELECT T_NAME,TD_CODE,RVA FROM AVG_TRANS 
JOIN TRANSFER ON AVG_TRANS.TD_CODE = TD_CODE
WHERE RVA = (SELECT MAX(RVA) FROM AVG_TRANS);


--9 ������ ��� ���� ����ϱ�
SELECT T_SEX, AVG(T_AGE) FROM TRANSFER GROUP BY T_SEX;

--10. �λ� ���̺��� ����ϵ�, �μ��ڵ�� �����ڵ�鵵 �μ���� ���޸����� ����ϱ�
--      �� 3���� ���̺��� ���� �����ؾ� ��
ALTER TABLE TRANSFER ADD CONSTRAINT FK_CODE FOREIGN KEY(TD_CODE) REFERENCES KBMajor(D_CODE);
ALTER TABLE TRANSFER ADD CONSTRAINT FK_CODE FOREIGN KEY(TR_CODE) REFERENCES RANK(R_CODE);
SELECT DEPARTMENT.D_NAME �μ���, RANK.R_NAME ���޸� FROM TRANSFER,RANK,DEPARTMENT WHERE TRANSFER.TD_CODE = DEPARTMENT.D_CODE AND TRANSFER.TR_CODE = RANK.R_CODE;