--- SNACK ���̺� ����
---> ���� �̸�, ��ȣ��, ����, ����
CREATE TABLE SNACK(
    SNACKNAME VARCHAR2(20),
    PREFRENSE INT,
    PRICE INT,
    CALORIE INT
);
---5~10���� ������ SNACK ���̺� ����
--(�����ʹ� ���� ���Ƿ� �ۼ��ϱ�)
INSERT INTO SNACK(SNACKNAME, PREFRENSE, PRICE, CALORIE) 
VALUES('�����',10,1800,400);

INSERT INTO SNACK(SNACKNAME, PREFRENSE, PRICE, CALORIE) 
VALUES('���±�',6,2000,500);

INSERT INTO SNACK(SNACKNAME, PREFRENSE, PRICE, CALORIE) 
VALUES('���ڱ�',3,1600,300);

INSERT INTO SNACK(SNACKNAME, PREFRENSE, PRICE, CALORIE) 
VALUES('���ı�',1,1400,300);

INSERT INTO SNACK(SNACKNAME, PREFRENSE, PRICE, CALORIE) 
VALUES('������',2,1600,200);

--1. ��� SNACK ������ �˻��Ͽ� ���
SELECT * FROM SNACK ;

--2. SNACK ���̺��� ������ ���� ���    �����Ͱ��� �˻��ؼ� �˾ƺ���
--(COUNT�Լ� ����)
SELECT COUNT(*) FROM SNACK;

-- DELETE : ������ ���� ��ɹ�
-- DELETE FROM ���̺�� WHERE ���ǹ�;

--3. �Ʒ��� ���ϴ� �����͵� ������ ��,       ������ ���� �˻��ؼ� �˾ƺ���
--	�����ִ� ������ ���
--- ������ 2000�� �̻��� ���� ������ ����
--- ��ȣ���� 1 ������ ���� ������ ����
--- ������ 500 �̻��� ���� ������ ����
DELETE FROM SNACK WHERE PRICE >= 2000;
DELETE FROM SNACK WHERE PREFRENSE <= 1;
DELETE FROM SNACK WHERE CALORIE >= 500;
-- ���� Ȯ��
SELECT * FROM SNACK;

--- SNACK ���̺� ���� (���̺� ��� ����)
DROP TABLE SNACK;

