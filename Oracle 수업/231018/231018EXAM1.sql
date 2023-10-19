-- �̰ɽ�� ��ũ��Ʈ ��� DBMS_OUTPUT.PUT_LINE
SET SERVEROUTPUT ON; 

--THINGS ���̺� ����
--	ǰ���(NAME)�⺻Ű  ����(PRICE) ���(CNT)
CREATE TABLE THINGS(
    NAME VARCHAR2(20) PRIMARY KEY,
    PRICE INT,
    CNT VARCHAR2(20)
);

--������ 7�� ���� INSERT INTO�� 
INSERT INTO THINGS VALUES('����',2000,'10');
INSERT INTO THINGS VALUES('û������',1800,'6');
INSERT INTO THINGS VALUES('��Ʈ',1500,'20');
INSERT INTO THINGS VALUES('����Ʈ��',1300,'30');
INSERT INTO THINGS VALUES('����',1000,'40');
INSERT INTO THINGS VALUES('����',1000,'60');
INSERT INTO THINGS VALUES('���찳',800,'22');

-- �Է� Ȯ�� 
SELECT * FROM THINGS;


--��ũ��Ʈ ��� �� ��� �����Ͱ� ������ϴ� �� ����ϸ�
--���̺�� ��� �����͸� ����� ���ν��� ���� �� ȣ��

-- ������ ����� ��� �����Ͱ� ������ϴٸ� ����ϴ� ���ν���
CREATE OR REPLACE PROCEDURE DEL_THINGS
IS BEGIN

DELETE FROM THINGS;
-- ��ũ��Ʈ ��¿� ���Ǵ� PL�� 


END DEL_THINGS;
/

-- ���ν��� ȣ��
EXEC DEL_THINGS();

/
--���ν��� : ������ �صΰ� ȣ���� ������ �ؾ�����
-- Ʈ���� : ��Ƽ� Ư�� ��ɹ��� �������� �� �ڵ����� ȣ���
--          �����ϴ� ������ ������ ȣ���ϴ� ������ ������ ����
-- Ʈ���� ����
--CREATE OR REPLACE TRIGGER Ʈ���Ÿ�
--[BEFORE/AFTER] [Ʈ���� ������ ��ɹ�] -- BEFORE INSERT
--ON ���̺��
--(FOR EACH ROW) -- �ۼ��صθ� Ʈ���� ������ ��ɹ� ������ ������ ������ �ȴ�
--                -- �����ҽ� �� �ѹ��� �����ϰ� �� �ķ� ���� �ȵ�
--DECLARE        
---- �����Ѵ�, ���� �����ϴ� �κ�
--BEGIN           
---- Ʈ���� ���� �ۼ��ϴ� �κ�
--END;
--/

-- DDL(������ ���� ��ɾ�)�� ���� Ʈ���� �ۼ��صΰ�
-- BEGIN-END ���̿� DML(������ ��ɾ�) ��ɾ� ����

-- INSERT�� ���� ��, "�����͸� �߰��մϴ�." Ʈ���� ���� 
CREATE OR REPLACE TRIGGER ALARM_INSERT
BEFORE INSERT ON THINGS
FOR EACH ROW
DECLARE BEGIN
DBMS_OUTPUT.PUT_LINE('�����͸� �߰��մϴ�');
END;
/

-- DELETE�� ����� '������ ����' Ʈ���� ����
CREATE OR REPLACE TRIGGER ALARM_DELETE
AFTER DELETE ON THINGS
FOR EACH ROW
DECLARE BEGIN
DBMS_OUTPUT.PUT_LINE('������ ����');
END;
/

-- 1. DDL(������ ���� ��ɾ�)�� ���� Ʈ���� �ۼ��صΰ�,
--      BEGIN-END ���� DML(������ ��ɾ�) ��ɾ� ���� �׽�Ʈ ������ ����
-- 2. DML(������ ��ɾ�)�� ���� Ʈ���� �ۼ��صΰ�,
--      �ܼ� ��¹� ����
