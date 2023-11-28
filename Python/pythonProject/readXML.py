import xml.etree.cElementTree as elemTree
import requests

myurl = 'https://api.odcloud.kr/api/3047940/v1/uddi:633f7dab-ffb5-4843-bc65-bd7f3b99dfa2?page=1&perPage=1000&returnType=XML&serviceKey=oOLjwwlEiv02I8IAl4hAxRvfBY4mNZgLQCum8yVEw2hJ0C9JPrCTsS0bt7gH%2Ft3PqVCf3yfdL%2BWaBMMdhSxexA%3D%3D'

# response에 myurl 가져오고
response = requests.get(myurl)

# response에있는 것을 문자열로 만들어주고
xmldatas = elemTree.fromstring(response.text)

# xmldatas에 'data'안에 있는 'item'만 가져오고 myresult에 대입한다
myresult = xmldatas.find('data').findall('item')

# 문자열 포메팅
for item in myresult:
    print('식당명: {},주메뉴: {}, 전화번호: {}'.format(item.find('./col[@name="상호명"]').text,
                                             item.find('./col[@name="주메뉴"]').text,
                                             item.find('./col[@name="전화번호"]').text))