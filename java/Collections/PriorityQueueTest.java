package com.jay.test;

import java.util.PriorityQueue;
import java.util.Calendar;

public class PriorityQueueTest {
    public static void main(String[] args) {
        PriorityQueue<String> pq = new PriorityQueue<String>();
        pq.add("nanjing");
        pq.add("beijing");
        while (!(null == pq.peek())) {
            System.out.println(pq.poll());
        }
    }
}