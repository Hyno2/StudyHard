-- ������� ���̺� ���� �����ȣ ���ڿ� PK, �̸� ���ڿ� NOT NULL, 
--                  �μ� ���ڿ� NOT NULL, ���� ����
CREATE TABLE EMPLOYEE(
    EM_NUM VARCHAR2(20) PRIMARY KEY,
    EM_NAME VARCHAR2(20) NOT NULL,
    EM_DP VARCHAR2(20) NOT NULL,
    EM_AGE INT
);
-- �μ���� ���̺� ���� �μ���ȣ ���ڿ� PK, �μ��̸� ���ڿ� NOT NULL, ������ ����
CREATE TABLE DEPARTMENT(
    DE_NUM VARCHAR2(20) PRIMARY KEY,
    DE_NAME VARCHAR2(20) NOT NULL,
    DE_EMNUM INT
);
-- ������� ������ �߰�
INSERT INTO EMPLOYEE VALUES('521','��浿','�濵������',25);
INSERT INTO EMPLOYEE VALUES('525','�̱浿','������',40);
INSERT INTO EMPLOYEE VALUES('523','�ֱ浿','������',30);
INSERT INTO EMPLOYEE VALUES('524','���浿','����������',29);

-- �μ���� ������ �߰�
INSERT INTO DEPARTMENT VALUES('1','������',30);
INSERT INTO DEPARTMENT VALUES('2','����������',15);
INSERT INTO DEPARTMENT VALUES('3','�濵������',10);

-- �������,�μ���� ��� ������ ���
SELECT * FROM EMPLOYEE;
SELECT * FROM DEPARTMENT;

-- ������ܿ��� �̸��� �μ� Į���� ���
SELECT EM_NAME,EM_DP FROM EMPLOYEE;

-- ������ܿ��� �μ��� �������� �����͸� �˻��� �����ȣ,�̸�,�μ� Į���� ���
SELECT EM_NUM,EM_NAME,EM_DP FROM EMPLOYEE WHERE EM_DP = '������';

-- �μ���ܿ��� �������� 10�� �ʰ��� �����͸� �˻��� �μ��̸�,������ Į���� ���
SELECT DE_NAME,DE_EMNUM FROM DEPARTMENT WHERE DE_EMNUM > 10;

-- �μ���ܿ��� �μ���ȣ�� 2�� �����͸� �˻��� ��ü Į���� ���
SELECT * FROM DEPARTMENT WHERE DE_NUM = '2';

-- �������, �μ���� ���̺� ����
DROP TABLE EMPLOYEE;
DROP TABLE DEPARTMENT;