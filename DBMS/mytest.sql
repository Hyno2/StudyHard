
-- ���ݱ����� �ϳ��� ���Ͽ� ���� ��ü �ڵ忡 ���� �����ؿ�����
-- ���� ����(CTRL+ENTER) / ��ũ��Ʋ����(��ü �ڵ� ����)(F5)

-- DataBase = Data + Base
-- DBMS : DB�� �����ϴ� �ý��� => Oracle, MySql MongoDB...

-- SqL��(������) : DBMS���� CRUD�� �����ϱ� ���� ����ϴ� �ڵ�
-- CREUD : Create / Read / Update / Delete => ���� �б� ���� ����

-- DQL (Data Query Language : ������ ��ȸ�ϴ� ���
-- SELECT : ������ �˻��ϴ� ����
-- SELECT : �Ӽ��̸� FROM ���̺�� [WHREE ���ǽ�]
-- DUAL : �ӽ� ���̺�

SELECT LENGTH('������') FROM DUAL;
SELECT LENGTHB('������') FROM DUAL; -- �ѱ��� �ѱ��ڿ� 3Byte

SELECT LENGTH('LeeHyeonOh') FROM DUAL;
SELECT LENGTHB('LeeHyeonOh') FROM DUAL;

-- WHERE�� ���ǽĿ� ���� �����̹Ƿ� �˻���� ��� X
SELECT LENGTH('HELLO') FROM DUAL WHERE LENGTH('HELLO')>=5;

-- DDL (Data Definition Language) : ������ ����(DB,TABLE,...)�� �����ϴ� ���
--          => CREATE, ALTER, DROP, TRUNCATE, RENAME

-- CREATE : �����͸� ������ ������ ����
-- CREATA TABLE ���̺��(
--      �Ӽ��̸� �ӻ�Ÿ��,
--      ...
--);

CREATE TABLE STUDENT(
    HAK_BUN VARCHAR2(10),
    NAME VARCHAR2(20) NOT NULL,
    AGE INT NOT NULL,
    SCORE FLOAT
);
-- NOT NULL : "NULL�� �Ǹ� �ȵǴ�" �Ӽ��� �ۼ�
-- PRIMARY KEY : �⺻Ű, �����͵鳢�� �����ϱ� ���� �Ӽ��� �ο�

-- * : ��ü ���
SELECT * FROM STUDENT;
-- �ΰ����� ���
SELECT AGE, NAME FROM STUDENT;


-- ������
-- VARCHAR2 Ÿ�԰� INT, NUMBER�� �ַ� ���
-- CHAR (n) : "����"���̸� ���� ���ڿ�
--            -> "������ n�� ũ�⸦ �Ҵ�"
-- VARCHAR2(n) : "����"���̸� ���� ���ڿ�
--          -> "�ִ� ũ�⸦ n���� ����, �ʿ信 ���� 0~n������ ���� �Ҵ�"
--              �ѱ� �ϳ��� ����,n����
-- NVARCHAR2(n) : �������̸� ���� ���ڿ�
--          -> "�ִ� ũ�⸦ n���� ����, �ʿ信 ���� 0~n������ ���� �Ҵ�"

-- ������
-- INT : ���� ������
-- FLOAT : �Ǽ� ������
-- NUMBER (p,s) : ����/�Ǽ� �Ѵ� ���� ������ ������
--      p (����+�Ǽ� �κп��� �ִ�� ���� ������ ����)
--      s (�Ǽ� �κп��� �ִ�� ���� ������ ����)
-- �Ӽ����� HEIGHT�̰� �Ӽ�Ÿ���� NUMBER(4,1) �̶� �Ѵٸ�
--  000.0 ���·� ���尡�� ,    171.1, 99.9, 50

-- �� �ܿ��� ��¥ Ÿ��, LOB���� ���� ���������� �˾ƺ���
-- DML : �����͸� �����ϴ� ��ɾ�
-- INSERT : ���̺� �����͸� �����ϴ� ��ɾ�
--          INSERT INTO ���̺�� VALUES(�����Ͱ�1, �����Ͱ�2, ..);
--          �Ӽ����� ����� ������� �����Ͱ��� ����
--          INSERT INTO ���̺��(�Ӽ���1, �ۼ���2, ...) VALUES(�����Ͱ�1, �����Ͱ�2,..);
--          �Ӽ���1���� �����Ͱ�1 ����, �Ӽ���2���� �����Ͱ�2 ����, ....

INSERT INTO STUDENT VALUES(1813, '������', 25, 3.5);
SELECT * FROM STUDENT;

-- DROP :  ���̺��� �����ϴ� ��ɾ�(���̺�, ������ ��� ����)
--          DROP TABLE ���̺��;
-- TRUNCATE : ���̺��� �����ϴ� ��ɾ�(���̺��� ���״� ���ܵΰ� �����͸� ��� ����
--          TRUNCATE TABLE ���̺��;


-- ALTER : ������ ������ ���� ����
--        => ADD, DROP, MODIFY, RENAME, RENAME COLUMN

-- ALTER ���̺�� ���� (RENAME)
-- ALTER TABLE ���̺��, RENAME TO ������_���̺��
ALTER TABLE STUDENT RENAME TO HAKSANG;

-- ALTER : Į���� ����
-- ALTER TABLE ���̺�� RENAME COLUMN �⺻_�Ӽ��̸�(Į����) TO ������_Į����
ALTER TABLE STUDENT RENAME COLUMN HAK_BUN TO NUM;
SELECT * FROM HAKSANG;

-- ALTER Į�� ����(DROP)
-- ALTER TABLE ���̺�� DROP ������_�Ӽ��̸�
ALTER TABLE STUDENT DROP COLUMN AGE INT;

-- ALTER : Į�� �߰�
-- ALTER TABLE ���̺�� ADD �߰���_�Ӽ��̸� �߰���_�Ӽ�Ÿ��
ALTER TABLE STUDENT ADD GRADE INT;

TRUNCATE TABLE STUDENT; -- "TABLE STUDENT�� �߷Ƚ��ϴ�." ����
DROP TABLE IF EXISTS STUDENT;     -- "TABLE STUDENT�� �����Ǿ����ϴ�." ����
SELECT * FROM STUDENT;

COMMIT; //����Ϸ�