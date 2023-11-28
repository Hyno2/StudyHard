import csv # csv 파일 읽는 라이브러리 호출
import pymysql
#f = 파일을 처리하는 변수
# open 함수를 통해 읽어 들인 파일에 대한 내용을 f에 저장
f = open('mydata.csv','r')

# 파일 데이터를 읽고 rdr변수에 대입
rdr = csv.reader(f)

# 리스트 선언
mydatas = []

#1. 연번 상호명 등 이건안나오게 출력하기(if와 pass 키워드사용)
# 첫줄 생략하려면 변수 하나 True 걸어두고 조건으로 변수 넣고 안에서 변수를 False로 바꾸면
# 다음부터는 False이므로 한줄만 생략되고 실행 되지 않는다
isStart = True # True 변수하나생성
# rdr에 있는 걸 한 줄씩 추가
for line in rdr :
    if isStart: # 조건문에 넣고
        isStart=False # False로 바꾼 후 다시 반복문으로 간다 그 후에는 False이므로 실행되지않음
        pass
    else:
        mydatas.append(line)
f.close()

sql = 'insert into apitable(name,hp,menu) '
sql = sql + "values('%s', '%s', '%s')"

for item in mydatas:
    conn = pymysql.connect(
        host = 'localhost',
        user = 'root',
        password='1234',
        db = 'apidb',
        charset = 'utf8'
    )
    #with : db 연결 후에 다되면 자동으로 연결 끊어줌
    with conn:
        with conn.cursor() as cur: # DB 안에 실제 명령 수행하는 것
            cur.execute(sql % (item[1],item[3],item[4]))
            conn.commit()
