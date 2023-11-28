import csv # csv 파일 읽는 라이브러리 호출

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

for item in mydatas:
    print(item)

#2. 출력양식을 상호명: ~~~, 전번: ~~~~, 대표메뉴: ~~~~
for item in mydatas:
    print (('상호명: %s, 전화번호: %s, 대표메뉴: %s') % (item[1],item[3],item[4])) # 중간에 %은 문자포메팅
    # 문자포메팅% 이란 문자열의 특정위치에 특정한값(변수)를 삽입하여 출력하는경우

