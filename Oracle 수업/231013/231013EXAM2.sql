-- �л���� ���̺� ���� : �й����ڿ�,�̸����ڿ�,�г����,�������ڿ�
CREATE TABLE STUDENT_LIST(
    HAK_BUN VARCHAR2(20),
    STNAME VARCHAR2(20) NOT NULL,
    HAK_NUN INT,
    STMAJOR VARCHAR2(20)
);

-- ������� ���̺� ���� : ��ȣ���ڿ� �̸����ڿ� NULL�����ȴ�
--                      ��ȭ��ȣ ���ڿ� NULL�����ȉ�
CREATE TABLE PROFESSOR_LIST(
    NUM VARCHAR2(20) PRIMARY KEY,
    PRONAME VARCHAR2(20) NOT NULL,
    PROTEL VARCHAR2(20) NOT NULL,
    PROMAJOR VARCHAR2(20) NOT NULL,
    PROAGE INT
);

-- �л���� ���̺� ������ �߰�
INSERT INTO STUDENT_LIST VALUES('123','��浿',1,'��ǻ�Ͱ���');
INSERT INTO STUDENT_LIST VALUES('124','�Ǳ浿',2,'���');
INSERT INTO STUDENT_LIST VALUES('125','�ڱ浿',4,'�����');
INSERT INTO STUDENT_LIST VALUES('126','���浿',4,'����');
INSERT INTO STUDENT_LIST VALUES('127','�̱浿',3,'�����');

-- ������� ���̺� ������ �߰�
INSERT INTO PROFESSOR_LIST VALUES('1','��ö��','010-0000-0000','�����',25);
INSERT INTO PROFESSOR_LIST VALUES('2','�̿���','010-1111-1111','���',45);
INSERT INTO PROFESSOR_LIST VALUES('3','����','010-2222-2222','��ǻ�Ͱ���',35);

-- �л���� , ������� ��� ������ ���
SELECT * FROM STUDENT_LIST;

SELECT * FROM PROFESSOR_LIST;

-- �л���ܿ��� 3�г� �̻��� �����͸� �˻��Ͽ� �й�,�̸�,�г� Į���� ����ϱ�
SELECT HAK_BUN,STNAME,HAK_NUN FROM STUDENT_LIST WHERE HAK_NUN >= 3;
-- ������ܿ��� ��ȣ�� 1�� �����͸� �˻��ؼ� �̸�,��ȭ��ȣ,�Ҽ����� Į���� ����ϱ�
SELECT PRONAME,PROTEL,PROMAJOR FROM PROFESSOR_LIST WHERE NUM = 1;
-- ������ܿ��� ���̰� 35���̻��� �����͸� �˻��ؼ� �̸�,���� Į���� ����ϱ�
SELECT PRONAME,PROAGE FROM PROFESSOR_LIST WHERE PROAGE >= 35;
-- �л���ܰ� ������� ���̺� �����ϱ�
DROP TABLE STUDENT_LIST;
DROP TABLE PROFESSOR_LIST;