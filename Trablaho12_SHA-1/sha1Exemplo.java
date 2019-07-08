package Criptografias;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
 
public class sha1Exemplo {
 
  
    public static void main(String[] args) throws NoSuchAlgorithmException {
        System.out.println(sha1("Cavanha"));
        System.out.println(sha1("cavanha"));
        System.out.println(sha1("c4v4nh4"));
        System.out.println(sha1("CAVANHA"));
        
    }
     
    static String sha1(String input) throws NoSuchAlgorithmException {
        MessageDigest mDigest = MessageDigest.getInstance("SHA1");
        byte[] result = mDigest.digest(input.getBytes());
        StringBuffer sb = new StringBuffer();
        for (int i = 0; i < result.length; i++) {
            sb.append(Integer.toString((result[i] & 0xff) + 0x100, 16).substring(1));
        }
         
        return sb.toString();
    }
}