# 실행 = shift + F10 혹은 위의 화살표 클릭
"""
이건 여러 줄 주석도 되고
여러 줄 짜리 문자열도 됨
"""
'''
작은 따옴표로도 여러 줄 주석 가능
여러 줄 주석이자 문자열
'''
# 튜플 여러 개로 된 리스트 ?? 
simbols = [('파이썬','비단뱀'),('리눅스','펭귄'),('java','커피')]
for lang,sim in simbols :# 자동으로 lang과 sim에 튜플들의 값이 대입됨
    print(lang,sim) # 자동으로 한칸 띄고 출력
# 이와 같이 출력되려면 변수의 개수가 같아야 한다