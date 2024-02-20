-- ��ҹ��� ���� ���� ���� ������ ����Ŭ��(;) �ֱ�

-- Oracle �ڷ���
-- ������
-- CHAR(n) : ����ũ���� ������ Ÿ��, ������ n���� ���� �Ҵ�(��ȿ����) �߻�����
-- VALCHAR2(n) : ����ũ���� ������ Ÿ��, '�ִ� n������'�� ���� �Ҵ�
-- NVARCHAR2(n) : �ѱ� ���� 1���� ����Ʈ�� ����ϰ� �Ѵ� ������ �ѱ��� 3����Ʈ

-- ������
-- INT : ���� ������
-- FLOAT : �Ǽ� ������
-- NUMBER(P,S) : ����, �Ǽ� ��� ����, 
--              P(�����κ� + �Ǽ��κ� �ִ� �ۼ� ������ ����)/ S(�Ǽ��κ� �ִ� �ۼ� ������ ����)
--              �Ӽ����� HEIGHT�̰� �Ӽ�Ÿ���� NUMBER(4,1) �̶� �Ѵٸ�
--              000.0 ���·� ���尡�� ,    171.1, 99.9, 50

-- CRUD : CREAT / READ / UPDATE / DELETE => ����/�б�/����/����
-- SQL�� : ���� CRUD ����� �����ϱ� ���� ��ɹ�(���ǹ�,������)
--      => <DQL / DDL / DML> / DCL / TCL

-- DQL(Query) : ������ ��ȸ
--  SELECT�� : �����͸� �˻��ϴ� ��ɾ� (�˻��� ����� ����Ͽ� ǥ��)
--  SELECT (Į����) FROM ���̺�� [WHERE ���ǹ�];

SELECT LENGTH('HelloSQL') FROM DUAL WHERE LENGTH('HELLOSQL')>=8;

-- DDL :(Defination) : ������ ����(DB, ���̺�, ...) ���� , ��������
--      => CREATE(����), ALTER(����), DROP, TRUNCATE(����)

-- DML :(Manipulation) : ������ ���� ,���������� ����������
--      => INSERT(����), UPDATE(����), DELETE(����), (+SELECT)DQL DML �Ѵ� ���ԉ�

-- ��α� �ۿ� ���� ���̺� ����
CREATE TABLE POST(
    TITLE VARCHAR2(30), -- �� ����
    DAY VARCHAR2(10),   -- �� �ۼ���¥
    BODY VARCHAR2(100)  -- �� ����
);

-- ������ ���� INSERT INTO ���̺�� (�Ӽ���1,�Ӽ���2,..) VALUES(������1��,������2��,..);
--           INSERT INTO ���̺�� VALUES(�����Ͱ�1,�����Ͱ�2, ...);
INSERT INTO POST VALUES('�ݿ���','231013','�̹��ֵ� ������');
INSERT INTO POST VALUES('�����','231014','�ָ������̴�');
INSERT INTO POST VALUES('�Ͽ���','231015','�ָ����᳡');
INSERT INTO POST VALUES('������','231016','���ְ� ���۵ƴ�');
INSERT INTO POST VALUES('ȭ����','231017','������ ȭ�����̴�');

-- POST ���̺� �־�, DAY�� ���� '20231013'�� �����͸� ����
-- DELETE FROM ���̺�� WHERE ���ǹ�;
DELETE FROM POST WHERE DAY ='231013';

-- POST ���̺� ���� ��ü �˻��Ͽ� ���
-- * : ��ü�� �ǹ��Ѵ�
SELECT * FROM POST;

-- DROP : ���̺� ����(������, ���̺� ���� ��� ����)
-- TRUNCATE : ���̺���� ������ ���� (�����͸� ��ü ����, ���̺� ������ �����ִ�)
--          DROP OR TRUNCATE TABLE ���̺��
-- POST ���̺� ��ü����
DROP TABLE POST;

-- POST ���̺��� ������ ����
TRUNCATE TABLE POST;
