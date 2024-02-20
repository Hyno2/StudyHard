-- ���ν��� : �Լ��� ������ ����, DB���� ������ �� �ִ� �ڵ� ��
--       ���α׷��� �� ���� ���� (�����ϴ� ��ü������ �ٷ��� �ʰڴ�)

-- ���ν��� ���� ���
-- OR REPLACE �� ����, ������ �̸��� ���ν��� ����� �Ұ����ϴ�
--CREATE OR REPLACE PROCEDURE ���ν�����
--(
--    �Ű����� (IN, OUT, INOUT)
--)
--IS
--    ��������
--BEGIN
--    ���ν��� ����
--END ���ν�����;

-- ��� ���̺� ����
CREATE TABLE EMPLOYEE(
    NUM VARCHAR2(10) PRIMARY KEY, -- �⺻Ű ����
    NAME VARCHAR(20),
    AGE INT,
    DEPART VARCHAR2(5)
);

-- �μ� ���̺� ����
CREATE TABLE DEPART(
    DEPART_NUM VARCHAR2(5), -- �ܷ�Ű ����
    NAME VARCHAR2(20),
    ----�������� PK_NUM���� ���� DEPART_NUM�� �⺻Ű�� �Ǿ���.
    CONSTRAINT PK_NUM PRIMARY KEY(DEPART_NUM)
);
-- EMPLOYEE�� DEPART-> DEPART�� DEPART_NUM���� ����
ALTER TABLE EMPLOYEE ADD CONSTRAINT FK_CODE 
FOREIGN KEY(DEPART) REFERENCES DEPART(DEPART_NUM);

-- ����� ���� ������ �߰�
-- INSERT������ ������ �߰��ؿ�����, ���ν����� �����ؼ� ������ �߰��غ���
-- ���ν��� ȣ�� -> EXEC ���ν�����(����1,����2, ...);
EXEC ADD_DEPART('1','������');
EXEC ADD_DEPART('2','�濵������');
EXEC ADD_DEPART('3','���������');
EXEC ADD_DEPART('4','������');

EXEC add_emplo('525','������',32,'1');
EXEC add_emplo('497','������',30,'4');
EXEC add_emplo('490','������',40,'3');
EXEC add_emplo('500','���¿�',30,'2');
EXEC add_emplo('450','��ȿ��',35,'2');
EXEC add_emplo('499','������',27,'1');
EXEC add_emplo('511','������',40,'4');

-- JOIN : 2���̻��� ���̺��� ����� ���� ����
-- JOIN ON 
SELECT *
FROM EMPLOYEE E JOIN DEPART D
ON E.DEPART =D.DEPART_NUM;

-- FROM ���� ���̺�� WHERE �����Į��1 = �����Į��2
SELECT NUM �μ���ȣ, EMPLOYEE.NAME �̸�, AGE ����, DEPART.NAME �μ��� 
FROM DEPART, EMPLOYEE WHERE DEPART_NUM = EMPLOYEE.DEPART;


