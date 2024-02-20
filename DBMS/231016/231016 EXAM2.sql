

-- SINGER 테이블 생성 순번id 정수 순차적증가, 이름name 최대 10글자
--                  , 히트곡hit_song_id 정수 단히트곡은 song테이블의 _id에 영향받음
CREATE TABLE SINGER (
    id INT, -- 순번
    name VARCHAR2(30), --이름
    hit_song_id INT -- 히트곡 FK
);  
-- SONG  테이블 생성 순번id 정수 순차적증가, 노래제목title 최대20글자,절때 빈칸x
--                  가격price 정수
CREATE TABLE SONG(
    id int PRIMARY KEY, --순번
    title VARchar2(60) NOT NULL, -- 노래제목
    price INT   -- 가격
);
DROP TABLE SONG;

-- 각 테이블 데이터 추가
-- SINGER 테이블 데이터 추가
INSERT INTO SINGER VALUES(1,'소녀시대', 1);
INSERT INTO SINGER VALUES(2,'원더걸스', 2);
INSERT INTO SINGER VALUES(3,'동방신기', 3);

-- SONG 테이블 데이터추가
INSERT INTO SONG VALUES(1,'GEE',10000);
INSERT INTO SONG VALUES(2,'TELL ME',9000);
INSERT INTO SONG VALUES(3,'HUG',8000);
INSERT INTO SONG VALUES(4,'거짓말',7000);
INSERT INTO SONG VALUES(5,'촛불',5000);

-- FK 설정
ALTER TABLE SINGER ADD CONSTRAINT FK_CODE FOREIGN KEY(HIT_SONG_ID)
REFERENCES SONG(ID);

-- 결과를 join으로 출력
SELECT SINGER.ID, NAME, TITLE, PRICE FROM SINGER JOIN SONG 
ON singer.hit_song_id = song.id;
