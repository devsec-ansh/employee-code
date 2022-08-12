package com.demo;

import java.util.Scanner;


public class AccountDetails {
	private String AccType;
	private String AccountNo;
	private long Balance;
	
	Scanner cin=new Scanner(System.in);
	
	public void newAccount() {
		AccountNo=cin.next();
		AccType=cin.next();
		Balance=cin.nextLong();
	}
	public void debit() {
		long debt_amount;
		debt_amount=cin.nextLong();
		Balance=Balance-debt_amount;
	}
	public void credit() {
		long cred_amount;
		cred_amount=cin.nextLong();
		Balance = Balance+cred_amount;
	}
}
