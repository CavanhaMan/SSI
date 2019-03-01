/*
+--------------------------------------------------------------+
| ***Windows-1251 charset to Hex***                            |
| If works, it is written by                                   |
| Siroj Matchanov(aka tech,msn92)                              |
| if it doesn't I dunno who wrote it                           |
| Recources used:                                              |
| http://www.science.co.il/language/Character-Code.asp?s=1251  |
+--------------------------------------------------------------+
*/
void Win1251ToHex(CString &input, /*(windows-1251/ascii charset)*/
				  CString &hex /*Output (in hex)*/
				 ) {
	hex=L"";
	for (int i=0;i<input.GetLength();i++){
		//each char represents a unique number (e.g. int('?')=1038)
		int ii=input[i];
		//russian letters represent numbers that are greater than 1000
		if(ii>1024){ //---------------------------------//
					 //   Uppercase&Lowercase Letters   //
					 //  ?-?-?-?  (1040-1071-1072-1103) //
					 //---------------------------------//
			if((ii>1039)&&(ii<1104)){
		     BYTE x=0xC0;
		     x=x+(ii-1040);
		     hex.Append(L"%");
		     hex.AppendFormat(L"%x",x);
			}
			else{//------------------------//
				 //    Special symbols     //
				 //------------------------//
				switch (ii) {
					case 8218: {
						hex.Append(L"%82");//‚
						break;
					}
					case 8222: {
						hex.Append(L"%84");//„
						break;
					}
					case 8230: {
						hex.Append(L"%85");//…
						break;
					}
					case 1038: {
						hex.Append(L"%A1");//?
						break;
					}
					case 1118: {
						hex.Append(L"%A2");//?
						break;
					}
					case 1025: {
						hex.Append(L"%A8");//?
						break;
					}
					case 1105: {
						hex.Append(L"%B8");//?
						break;
					}
					case 8470: {
						hex.Append(L"%B9");//?
						break;
					}
				}
			}
		}
		else if(ii<127) {
			hex.Append(L"%");
			hex.AppendFormat(L"%x",ascii[i]);
		}//Because they are not used usually,
	}	 //this code doesn't convert the following symbols:
}		 //??‚?„…†‡€‰?‹?????‘’""•–—™?›?????¤?¦§©«¬®?°±???µ¶·?»????
		 //If you want them to be in windows-1251 charset format hex...
		 //...then continue the code yourself please :)
		 //(Almost) any other symbol in windows-1251 charset has
		 //the same hex value as ascii symbols do.
