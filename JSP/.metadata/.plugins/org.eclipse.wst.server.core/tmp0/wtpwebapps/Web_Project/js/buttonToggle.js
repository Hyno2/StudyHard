// 버튼 슬라이드 토글 부분
$(document).ready(function() {
    // 첫 번째 버튼 클릭 시 테이블 토글
    $('#toggleRecruitInfoButton').click(function() {
        $('#recruitInfoTable').slideToggle(4000); 
    });

    // 두 번째 버튼 클릭 시 테이블 토글
    $('#toggleRecruitInfoButton2').click(function() {
        $('#recruitInfoTable2').slideToggle(4000);
    });

    // 세 번째 버튼 클릭 시 테이블 토글
    $('#toggleRecruitInfoButton3').click(function() {
        $('#recruitInfoTable3').slideToggle(4000);
    });

    // 네 번째 버튼 클릭 시 테이블 토글
    $('#toggleRecruitInfoButton4').click(function() {
        $('#recruitInfoTable4').slideToggle(4000);
    });

    // 초기에 테이블 숨기기
    $('#recruitInfoTable').hide();
    $('#recruitInfoTable2').hide();
    $('#recruitInfoTable3').hide();
    $('#recruitInfoTable4').hide();
});