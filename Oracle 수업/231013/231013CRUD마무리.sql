-- DDL :(Defination) : ������ ����(DB, ���̺�, ...) ���� , ��������
--      => CREATE(����), ALTER(����), DROP, TRUNCATE(����)

-- DML :(Manipulation) : ������ ���� ,���������� ����������
--      => INSERT(����), UPDATE(����), DELETE(����), (+SELECT)DQL DML �Ѵ� ���ԉ�

-- �޴��� ���̺� ����
CREATE TABLE PHONE(
    NAME VARCHAR2(20),        -- ����
    OS VARCHAR2(20),          -- �ü��
    DAY INT,                  -- ��ó⵵
    WAT INT,                  -- ���͸� �ִ� ��Ʈ
    COLOR VARCHAR(10)         -- ����
);

-- ADD : Į���߰�
-- ALTER TABLE ���̺�� ADD Į���� Į��Ÿ��;
-- PHONE ���̺� FLOAT�� INCH Į���߰�
ALTER TABLE SMARTPHONE_LIST ADD INCH FLOAT;

--  Ȯ�����
SELECT * FROM SMARTPHONE_LIST;

-- DROP COLUMN : Į������
--  ALTER TABLE ���̺�� DROP COLUMN Į����;
-- PHONE ���̺� WAT Į�� ����
ALTER TABLE SMARTPHONE_LIST DROP COLUMN WAT;

-- RENAME : ���̺�� ����
--  ALTER TABLE ���̺�� RENAME TO ���������̺��;
-- RENAME COLUMN : Į���� ����
-- ALTER TABLE ���̺�� RENAME COLUMN �����÷��� TO �������÷���;

-- ���̺�� PHONE�� SMARTPHONE_LIST�� ����
ALTER TABLE PHONE RENAME TO SMARTPHONE_LIST;

-- INCHĮ���� INCH1�� �����ϱ�
ALTER TABLE SMARTPHONE_LIST RENAME COLUMN INCH TO INCH1;

-- MODIFY : ������ Į���� Ÿ�� ����
--  ALTER TABLE ���̺�� MODIFY �÷Ÿ� �÷�Ÿ��;

-- INCH1Į���� Ÿ���� FLOAT->INT�� ����
ALTER TABLE SMARTPHONE_LIST MODIFY INCH1 INT;

-- Ȯ�����
SELECT * FROM SMARTPHONE_LIST;

-- INSERT�� ������ �߰�
INSERT INTO SMARTPHONE_LIST VALUES('������S20','11',2021,'PINK',6.4);
INSERT INTO SMARTPHONE_LIST VALUES('������13','10',2023,'WHITE',7.0);
INSERT INTO SMARTPHONE_LIST VALUES('����������2','12',2022,'BLUE',8.5);

-- UPDATE : Ư�� �����͸� �����ϴ� ��ɾ�
--      UPDATE ���̺�� SET Į��1=���氪1, ... WHERE ������;
-- ��ó⵵�� 2022�� �������� OS ���� 13���� ����
UPDATE SMARTPHONE_LIST SET OS='13' WHERE DAY = '2022';
UPDATE SMARTPHONE_LIST SET OS='13', COLOR='BLACK' WHERE NAME = '������13';
