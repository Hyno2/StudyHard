package com.kb;
import java.util.ArrayList;
import java.util.List;

public class MyFriends1 {


    public static void main(String[] args) {

        List<Friend> friendList = new ArrayList();

        friendList.add(new UnivFriend("lee", "computer", "01011112222"));
        friendList.add(new UnivFriend("seo", "electronics", "01011113333"));
        friendList.add(new CompFriend("yoon", "electronics", "01011113333"));


        for(int i = 0; i < friendList.size(); ++i) {
            ((Friend)friendList.get(i)).showInfo();
        }
    }
}

