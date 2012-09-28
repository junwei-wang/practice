import java.math.BigInteger;
import java.util.HashMap;
import java.util.Map;

public class Dlog {
	public static final BigInteger two_BigInt = new BigInteger("2"); // 2
	public static final BigInteger twenty_BigInt = new BigInteger("20"); // 20

	public static final String p_String = "134078079299425970995740249982058461"
			+ "2747936582059239337772356144372176403007354697680187429816690342"
			+ "7690031858186486050853753882811946569946433649006084171";

	public static final String g_String = "117178298803662070095161175963353670"
			+ "8855808499999895220559997945906392949973658374667057217647146031"
			+ "2928594829675428279466566527115212748467589894601965568";

	public static final String h_String = "323947510405045044356526437872806578"
			+ "8649097520952449527834792452971981976143292558073856937958553180"
			+ "532878928001494706097394108577585732452307673444020333";

	public static final BigInteger p_BigInt = new BigInteger(p_String); // p
	public static final BigInteger g_BigInt = new BigInteger(g_String); // g
	public static final BigInteger h_BigInt = new BigInteger(h_String); // h

	public static final BigInteger g_inverse_BigInt = g_BigInt
			.modInverse(p_BigInt); // g^(-1)

	public static final BigInteger B = two_BigInt.modPow(twenty_BigInt,
			p_BigInt);  // 2^20

	public static final BigInteger GtoB = g_BigInt.modPow(Dlog.B, p_BigInt); // g^(2^20)

	public Map<BigInteger, BigInteger> x0_hashMap = new HashMap<BigInteger, BigInteger>();

	public void createHashMap_x0() {
		// compute h*g^(-i), i = 0, 1, 2,.., 2^20
		BigInteger tempResult = Dlog.h_BigInt;
		for (BigInteger i = BigInteger.ONE; i.compareTo(B) != 1; i = i
				.add(BigInteger.ONE)) {
			tempResult = tempResult.multiply(g_inverse_BigInt).mod(p_BigInt);
			this.x0_hashMap.put(tempResult, i);
			System.out.println("Saving hashmap " + i);
		}
	}

	public void checkHashCollision() {
		BigInteger temp2 = BigInteger.ONE;
		for (BigInteger i = BigInteger.ONE; i.compareTo(B) != 1; i = i
				.add(BigInteger.ONE)) {
			temp2 = temp2.multiply(GtoB).mod(p_BigInt);

			if (this.x0_hashMap.containsKey(temp2)) {
				System.out.println("Find Collision!");
				System.out.println("x0 = " + i);
				System.out.println("x1 = " + this.x0_hashMap.get(temp2));
				BigInteger result = i.multiply(B)
						.add(this.x0_hashMap.get(temp2)).mod(p_BigInt);
				System.out.println("x  = " + result.toString());
				break;
			} else {
				System.out.println("Checking hashmap " + i + " no!");
			}
		}
	}

	public static void main(String[] args) {
		Dlog dlog = new Dlog();
		dlog.createHashMap_x0();
		dlog.checkHashCollision();
	}
}
