package Criptografias;

import java.math.BigInteger;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;

public class sha1checksum{

	public static void main(String[] args) {

		String password0 = "Cavanha";
		String password1 = "cavanha";
		String password2 = "c4v4nh4";
		String password3 = "CAVANHA";

		System.out.println("MD5 em HEXADECIMAL : " + md5(password0));
		System.out.println("MD5 em HEXADECIMAL : " + md5(password1));
		System.out.println("MD5 em HEXADECIMAL : " + md5(password2));
		System.out.println("MD5 em HEXADECIMAL : " + md5(password3));
		
		

	}

	public static String md5(String input) {

		String md5 = null;

		if (null == input)
			return null;

		try {

			// Create MessageDigest object for MD5
			MessageDigest digest = MessageDigest.getInstance("MD5");

			// Update input string in message digest
			digest.update(input.getBytes(), 0, input.length());

			// Converts message digest value in base 16 (hex)
			md5 = new BigInteger(1, digest.digest()).toString(16);

		} catch (NoSuchAlgorithmException e) {

			e.printStackTrace();
		}
		return md5;
	}
}