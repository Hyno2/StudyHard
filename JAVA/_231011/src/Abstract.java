// 추상 클래스 : 정의가 덜 된 클래스
// 추상 클래스에는 기본 생성자 마저도 없기 때문
// 추상클래스 + 상속 + 오버라이딩 => 추상 클래스를 다른 클래스에서 상속받아서 "구체화" 시킨다.
// 추상 메소드 : 정의가 덜 된 메소드
// abstract 키워드 사용해서 선언
abstract class Animal {
    // 늘 작성하던 방식인 "구체적으로 정의한 함수"
    //          ==> 선언부 + 정의부
    private String species;

    public String getSpecies() {
        return species;
    }

    public void setSpecies(String species) {
        this.species = species;
    }

    public void print() {
        System.out.println("이동물은" + this.species + "입니다.");
    }

    // 추상메소드 : abstract + 선언부만 작성하여 선언 ({} 부분 정의부가 없음)
    abstract public void cry();
}

class Dog extends Animal {
    // 1. 생성자 통해서, species값을 강아지로 초기화
    // 2. cry() 함수 오버라이딩하여 재정의
    public Dog() {
        this.setSpecies("강아지");
    }

    // 메소드 오버라이딩하여 "구체화"
    @Override
    public void cry() {
        System.out.println("월월월");
    }
}
class Cat extends Animal{
    public Cat() {
        this.setSpecies("고양이");
    }
    @Override
    public void cry(){
        System.out.println("야옹야옹야옹");
    }
}
// 클래스 : 객체/인스턴스를 생성하는 틀
// 추상적인 틀?  => 추상 클래스 통해서는 객체를 생성x

public class Abstract {
    public static void main(String[] args) {
        Dog dog = new Dog();
        dog.cry();
        Cat cat = new Cat();
        cat.cry();
    }
}
