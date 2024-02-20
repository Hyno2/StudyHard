

-- SINGER ���̺� ���� ����id ���� ����������, �̸�name �ִ� 10����
--                  , ��Ʈ��hit_song_id ���� ����Ʈ���� song���̺��� _id�� �������
CREATE TABLE SINGER (
    id INT, -- ����
    name VARCHAR2(30), --�̸�
    hit_song_id INT -- ��Ʈ�� FK
);  
-- SONG  ���̺� ���� ����id ���� ����������, �뷡����title �ִ�20����,���� ��ĭx
--                  ����price ����
CREATE TABLE SONG(
    id int PRIMARY KEY, --����
    title VARchar2(60) NOT NULL, -- �뷡����
    price INT   -- ����
);
DROP TABLE SONG;

-- �� ���̺� ������ �߰�
-- SINGER ���̺� ������ �߰�
INSERT INTO SINGER VALUES(1,'�ҳ�ô�', 1);
INSERT INTO SINGER VALUES(2,'�����ɽ�', 2);
INSERT INTO SINGER VALUES(3,'����ű�', 3);

-- SONG ���̺� �������߰�
INSERT INTO SONG VALUES(1,'GEE',10000);
INSERT INTO SONG VALUES(2,'TELL ME',9000);
INSERT INTO SONG VALUES(3,'HUG',8000);
INSERT INTO SONG VALUES(4,'������',7000);
INSERT INTO SONG VALUES(5,'�к�',5000);

-- FK ����
ALTER TABLE SINGER ADD CONSTRAINT FK_CODE FOREIGN KEY(HIT_SONG_ID)
REFERENCES SONG(ID);

-- ����� join���� ���
SELECT SINGER.ID, NAME, TITLE, PRICE FROM SINGER JOIN SONG 
ON singer.hit_song_id = song.id;
