package com.kb;

import java.io.InputStream;
import java.util.Scanner;

// 형태가 같은건 메소드로 떼어낸다
// 다른거 파라메터로 돌린다
public class Input {
    public String inputFromUser(String msg,Scanner scanner){
        System.out.println(msg);
        String str = scanner.nextLine();
        return str;
    }
}
